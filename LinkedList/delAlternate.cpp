#include<iostream>

using namespace std;
class node{
    public:
    int val;
    node*next;
    node(int data){
        data=val;
        next=NULL;
    }
};
class linkedList{
    private:
    node*head;
    public:
    linkedList(){
        head=nullptr;
    }
    void insertAtTail(int val){
        node*new_node = new node(val);
        if(head==NULL){ // linked list is empty
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
            temp=temp->next;
        }cout<<"NULL"<<endl;
    }
};
int main(){
    linkedList l1;
    l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(3);
    l1.insertAtTail(4);
    l1.insertAtTail(5);
    l1.display();

    
}