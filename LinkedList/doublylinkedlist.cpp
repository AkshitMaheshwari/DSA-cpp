#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
    int val;
    node*prev;
    node*next;

    node(int data){
        val=data;
        prev=NULL;
        next=NULL;
    }
};

class DoublyLinkedList{
    public:
    node*head;
    node*tail;
    
    DoublyLinkedList(){
        head=NULL;
        tail=NULL;
    }
    void display(){
        node*temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp=temp->next;
        }cout<<"NULL";
    }
    void insert_at_start(int val){
        node*new_node = new node(val);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        new_node->next =head;
        head->prev = new_node;
        head=new_node;
        return;
        
    }
    void insert_at_tail(int val){
        node*new_node = new node(val);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }
    int getLength(){
        node*temp = head;
        int length = 0;
        while(temp!=NULL){
            length++;
            temp = temp->next;
        }
        return length;
    }
    void insert_at_pos(int pos,int val){
        node*new_node = new node(val);
        if(pos==1){
            insert_at_start(val);
            return;
        }
        if(pos>getLength()){
            insert_at_tail(val);
            return; 
        }
        int i = 1;
        node*prevNode = head;
        while(i<pos-1){
            prevNode = prevNode->next;
            i++;
        }
        node* curr = prevNode ->next;
        // node*new_node = new node(val);
        prevNode->next = new_node;
        new_node->prev = prevNode;
        curr->prev = new_node;
        new_node->next = curr;
    }

};
int main(){
    DoublyLinkedList dl1;
    // node*new_node = new node(3);
    // dl1.head = new_node;
    // dl1.tail = new_node;
    // cout<<dl1.head->val<<endl;
    dl1.insert_at_start(1);
    dl1.insert_at_start(2);
    dl1.insert_at_start(3);
    dl1.insert_at_start(4);
    dl1.insert_at_tail(5);
    dl1.insert_at_pos(5,10);
    dl1.display();
}

