#include<iostream>
using namespace std;

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

int main(){
    node*root = new node(2);
    root->left = new node(1);
    root->right = new node(6);

    cout<<"Root Node Value: "<<root->value<<endl;
    cout<<"Left Node value: "<<root->left->value<<endl;
    cout<<"Right Node value: "<<root->right->value<<endl;
}