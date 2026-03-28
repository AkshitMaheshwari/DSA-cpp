#include<iostream>
using namespace std;


// INORDER TRAVERSAL: LEFT -> ROOT -> RIGHT
// PEHLE LEFTEST NODE PRINT KREGA FIR ROOT PR JAYEGA FIR RIGHT PR JAYEGA

class node{
    public:
    int value;
    node*left;
    node*right;

    node(int val){
        value = val;
        left = right = NULL;
    }
};

void inOrder(node* root){
    if(root==NULL){
        return;
    }

    inOrder(root->left);
    cout<<root->value<<" ";
    inOrder(root->right);
}

int main(){
    node*root = new node(2);
    root->left = new node(1);
    root->right = new node(6);

    root->left->left = new node(10);
    root->left->right = new node(15);
    root->right->right = new node(20);
    root->right->left = new node(5);

    //      2
    //   1     6 
    // 10 15  5  20

    // cout<<"Root Node Value: "<<root->value<<endl;
    // cout<<"Left Node value: "<<root->left->value<<endl;
    // cout<<"Right Node value: "<<root->right->value<<endl;
    cout<<"Inorder Traversal: ";
    inOrder(root);
    cout<<endl;
}