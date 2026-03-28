#include<iostream>
#include<queue>
using namespace std;


// LEVEL ORDER TRAVERSAL: PRINT ALL THE NODES OF A LEVEL BEFORE MOVING TO 
// THE NEXT LEVEL 
// AKA BREADTH FIRST TRAVERSAL


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

    node*root = new node(2);
    root->left = new node(1);
    root->right = new node(6);

    root->left->left = new node(10);
    root->left->right = new node(15);
    root->right->right = new node(20);
    root->right->left = new node(5);

    levelOrder(root);

}