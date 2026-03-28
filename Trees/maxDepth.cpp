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
        left= right=NULL;
    }
};
int maxDepth(node* root){
    if(root==NULL){
        return 0;
    }
    int leftDepth = maxDepth(root->left);
    int rightDepth = maxDepth(root->right); 
    return max(leftDepth,rightDepth) +1;
}
int main(){
    node*root = new node(2);
    root->left = new node(1);
    root->right = new node(6);

    root->left->left = new node(10);
    root->left->right = new node(15);
    root->right->right = new node(20);
    root->right->left = new node(5);
    root->right->right->left = new node(25);
    cout<<maxDepth(root)<<endl;
}