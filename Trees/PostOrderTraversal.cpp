#include<iostream>
using namespace std;


// POSTORDER TRAVERSAL: LEFT -> RIGHT -> ROOT
// PEHLE LEFTEST NODE PRINT KREGA FIR RIGHT PR JAYEGA FIR ROOT PR JAYEGA

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

void PostOrder(node* root){
    if(root==NULL){
        return;
    }

    PostOrder(root->left);
    PostOrder(root->right);     
    cout<<root->value<<" ";
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
    cout<<"PostOrder Traversal: ";
    PostOrder(root);
    cout<<endl;
}