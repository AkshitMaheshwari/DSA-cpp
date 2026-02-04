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
    node* head;
    LinkedList(){
        head = NULL;
    }
    void insert(int val){
        node*new_node = new node(val);
        if(head==NULL){
            head = new_node;
            return;
        }
        node*temp = head;
        while(temp->next !=NULL){
            temp = temp->next;
        }
        temp->next = new_node;        
    }
    void display(){
        node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

};
int getLength(node* head){
    node*temp = head;
    int len =0;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

node* revkNode(node* &head,int k){
    if(head==NULL){
        return NULL;
    }
    int len = getLength(head);
    if(k>len){
        cout<<"k is greater than length of linked list"<<endl;
        return head;
    }
    // Step1 : Reverse first K nodes of LL
    node* prev = NULL;
    node* curr =head;
    node* forward = curr->next;
    int count =0;

    while(count<k){
        forward = curr->next;
        curr->next = prev;
        prev= curr;
        curr = forward;
        count++;
    }
    // Step 2: Recursive call for remaining nodes
    if (forward!=NULL){
        head->next = revkNode(forward,k);
    }

    // step 3: return head of reversed k nodes
    return prev;
}

int main(){
    LinkedList l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.insert(4);   
    l1.insert(5);
    l1.insert(6);
    l1.insert(7);
    l1.insert(8);
    l1.insert(9);
    l1.display();
    l1.head = revkNode(l1.head,3);
    // revkNode(l1.head,k);
    cout<<"Reversed Linked List in groups of k nodes: "<<endl;
    l1.display();

}