#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        data = val;
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
            head= new_node;
            return;
        }
        node*temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void display(){
        node*temp = head;;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
void removeDuplicates(node* &head){
    if(head ==NULL){
        return ;
    }
    if(head->next ==NULL){
        return ;
    }
    node*curr = head;
    while(curr!=NULL){
        if(curr->next !=NULL && (curr ->data == curr->next->data)){
            node* temp  =curr->next;
            curr ->next = curr->next->next;
            temp->next = NULL;
            delete temp;
        }
        else{
            curr = curr->next;
        }
    }
}
int main(){
    LinkedList l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.insert(3);
    l1.insert(4);
    l1.insert(4);
    l1.display();
    removeDuplicates(l1.head);
    l1.display();

}