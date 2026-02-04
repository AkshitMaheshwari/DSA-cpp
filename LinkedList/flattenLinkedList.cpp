#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node*next;
    node(int data){
        val = data;
        next =NULL;
    }
};
class LinkedList{
    public:
    node*head;
    LinkedList(){
        head=NULL;
    }
    void insert(int val){
        node* new_node = new node(val);
        while(head==NULL){
            head = new_node;
            return;
        }
        node*temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = new_node;
    }
    void display(){
        node*temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp= temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
