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
    cout<<"Level order traversal of the BST is: "<<endl;
    levelOrder(root);
}