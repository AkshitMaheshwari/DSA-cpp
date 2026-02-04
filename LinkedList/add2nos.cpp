#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        data = val;
        next=NULL;
    }
};
class LinkedList{
    public:
    node*head;
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
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void display(){
        node*temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
node* reverse(node* &head){
    node*prev = NULL;
    node*curr = head;
    node*nextptr;
    while(curr!=NULL){
        nextptr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextptr;
    }
    return prev;
}
node* solve(node* &head1, node* &head2){
    // step1: reverse both the linked lists
    head1 = reverse(head1);
    head2 = reverse(head2);

    // step2: add both the linked lists
    node*ans_head = NULL;
    node* ans_tail = NULL;
    int carry = 0;
    while(head1 !=NULL && head2!=NULL){
        int sum = carry + head1->data + head2->data;
        int digit = sum%10;
        carry = sum/10;
        node*new_node = new node(digit);

        if(ans_head==NULL){
            ans_head=  new_node;
            ans_tail = new_node;
        }
        else{
            ans_tail->next = new_node;
            ans_tail = new_node;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    while(head1!=NULL){
        int sum = carry+head1->data;
        int digit = sum%10;
        carry = sum/10;
        node* new_node = new node(digit);
        ans_tail->next = new_node;
        ans_tail = new_node;
        head1 = head1->next;
    }
    while(head2!=NULL){
        int sum = carry+head2->data;
        int digit = sum%10;
        carry = sum/10;
        node* new_node = new node(digit);
        ans_tail->next = new_node;
        ans_tail = new_node;
        head2 = head2->next;
    }
    ans_head = reverse(ans_head);
    return ans_head;
    
    
}
int main(){
    LinkedList l1;
    LinkedList l2;
    l1.insert(2);
    l1.insert(3);
    l1.display();
    l2.insert(4);
    l2.insert(3);
    l2.insert(2);
    l2.display();
    node* ans = solve(l1.head,l2.head);
    // cout<<ans->data<<endl;
    
}