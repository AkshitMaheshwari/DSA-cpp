#include<iostream>
using namespace std;

// PREORDER TRAVERSAL: ROOT -> LEFT -> RIGHT
// PEHLE STARTING NODE SE SABKI LEFT NODE PRINT KREGA FIR RIGHT PR JAYEGA 


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
void preOrder(node* rootNode){
    
    // base case:
    if(rootNode==NULL){
        return;
    }

    // recursive call
    cout<<rootNode->value<<" ";
    preOrder(rootNode->left);
    preOrder(rootNode->right);
}

int main(){
    node*root = new node(2);
    root->left = new node(1);
    root->right = new node(6);

    root->left->left = new node(10);
    root->left->right = new node(15);
    root->right->right = new node(20);

    //      2
    //   1     6 
    // 10 15     20
    preOrder(root);
    // cout<<"Root Node Value: "<<root->value<<endl;
    // cout<<"Left Node value: "<<root->left->value<<endl;
    // cout<<"Right Node value: "<<root->right->value<<endl;
}