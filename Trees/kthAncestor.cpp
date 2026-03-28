#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        this->data = val;
        left=right=NULL;
    }
};
bool kthancestor(Node*root,int &k, Node*p){
    if(root == NULL){
        return false;
    }

    if(root->data == p->data){
        return true;
    }
    bool leftans = kthancestor(root->left,k,p);
    bool rightans = kthancestor(root->right,k,p);

    // jab hum wapas aarhe honge 

    // check left ya right me answer mila ya nhi ?

    if(leftans || rightans){
        k--;
        if(k==0){
            cout<<"kth Ancestor is "<<root->data<<endl;
        }
    }
    
    
    return leftans||rightans;
}

// Tree design 


        //         1
        //     /       \
        //    2         3  
        //  /   \      /  \
        //  4    5    6    7
        //       /     \
        //      8       9

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->right->left = new Node(8);
    root->left->right->right = new Node(9);

    Node* p = new Node(8);
    int k = 2;
    kthancestor(root, k, p);

    return 0;
}