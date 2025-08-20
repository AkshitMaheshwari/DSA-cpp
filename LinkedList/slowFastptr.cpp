#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class node{
    public:
    int val;
    node*next;
    node(int data){
        val = data;
        next = NULL;
    }
};
class LinkedList{
    public:
    node*head;
    LinkedList(){
        head=NULL;
    }
    void insert(int val){
        node*new_node = new node(val);
        if(head==NULL){
            head = new_node;
            return;
        }
        node*temp= head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = new_node;
    }
    void display(){
        node*temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
node* findMiddleEle(node*&head){
    node*slow = head;
    node*fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
int main(){
    LinkedList l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.insert(4);
    l1.insert(5);
    l1.display();
    node*middlenode = findMiddleEle(l1.head);
    cout<<middlenode->val<<endl;
}