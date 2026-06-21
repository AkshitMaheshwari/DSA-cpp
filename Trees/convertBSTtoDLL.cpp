#include<iostream>
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

void convertIntoSortedDLL(node* root,node* head){
    // base case

    if(root == NULL){
        return;
    }
    convertIntoSortedDLL(root->right,head); 
    // attach root node

    root->right = head;

    if(head!=NULL){
        head->left= root;
    }
    head = root;
    convertIntoSortedDLL(root->left,head);
}

void inorder(node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

int main(){
    node* root = new node(10);
    root->left = new node(5);
    root->right = new node(15);
    root->right->right = new node(20);
    root->right->left = new node(12);
    cout<<"Inorder traversal of the BST is: "<<endl;
    inorder(root);
    cout<<endl;
    node* head = NULL;
    convertIntoSortedDLL(root,head);
    cout<<"Inorder traversal of the DLL is: "<<endl;
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->right;
    }
}