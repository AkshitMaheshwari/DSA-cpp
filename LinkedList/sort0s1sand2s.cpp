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
        head= NULL;
    }
    void insert(int val){
        node*new_node = new node(val);
        if(head==NULL){
            head = new_node;
            return;
        }
        node*temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void display(){
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
void sort012s(node* &head){
    int zero = 0;
    int one =0;
    int two = 0;
    node*temp = head;
    while(temp!=NULL){
        if(temp->data ==0){
            zero++;
        }
        else if(temp->data==1){
            one++;
        }
        else if(temp->data==2){
            two++;
        }
        temp = temp->next;
    }
    temp = head;
    while(temp!=NULL){
        while(zero--){
            temp->data=0;
            temp = temp->next;
        }
        while(one--){
            temp->data=1;
            temp=temp->next;
        }
        while(two--){
            temp->data= 2;
            temp=temp->next;
        }

    }
}

int main(){
    LinkedList l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(0);
    l1.insert(1);
    l1.insert(0);
    l1.insert(2);
    l1.insert(1);
    l1.display();
    sort012s(l1.head);
    l1.display();
}