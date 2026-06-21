#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int val;
    node*left;
    node*right;
    node(int data){
        val = data;
        left = right = NULL;
    }   
};

node* findNode(node*root,int k){
    if(root == NULL){
        return NULL;
    }
    if(root->val == k){
        return root;
    }
    if(k>root->val){
        return findNode(root->right,k);
    }
    else{
        return findNode(root->left,k);
    }
}
int maxval(node* root){
    node* temp = root;
    while(temp->right!=NULL){
        temp = temp->right;
    }
    return temp->val;
}

node* deleteNode(node*root, int k){
    if(root== NULL){
        return root;
    }
    if(root->val == k){
            if(root->left == NULL && root -> right == NULL){
            delete root;
            return NULL;
        }
        else if(root->left == NULL && root->right !=NULL){
            node* child = root->right;
            delete root;
            return child;
        }
        else if(root->left!=NULL && root->right ==NULL){
            node*child = root->left;
            delete root;
            return child;
        }
        else{
            int inorderpre = maxval(root->left);
            root->val = inorderpre;
            root->left =deleteNode(root->left,inorderpre);
            return root;
        }
    }
    else if(k>root->val){
        root->right = deleteNode(root->right,k);
        return root;
    }
    else{
        root->left = deleteNode(root->left,k);
        return root;
    }

    // node* temp = findNode(root,k);
    
}
node* insertintoBST(node*& root, int val){
    if(root == NULL){
        // first node to be inserted
        root = new node(val);
        return root;
    }
    // if not the first node,
    if(root->val>val){
        // we will go left
        root->left = insertintoBST(root->left,val);
    }
    else{
        // we will go right
        root->right = insertintoBST(root->right,val);
    }
    return root;
}
void takeinput(node* &root){
    int val;
    cin>>val;
    while(val!=-1){
        root= insertintoBST(root,val);
        cin>>val;
    }
}
void levelOrder(node* root){
    if(root ==NULL){
        return ;
    }
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        int nodeAtCurrLvl = q.size();
        while(nodeAtCurrLvl--){
            node* currNode = q.front();
            q.pop();
            cout<<currNode->val<<" ";
            if(currNode->left){
                q.push(currNode->left);
            }
            if(currNode->right){
                q.push(currNode->right);
            }

        }
        cout<<endl;
    }

}
int main(){
    node* root = NULL;
    cout<<"Enter the values to be inserted into the BST, -1 to stop: "<<endl;
    takeinput(root);
    levelOrder(root);
    deleteNode(root,100);
    cout<<"Level order traversal after deletion: "<<endl;
    levelOrder(root);

}