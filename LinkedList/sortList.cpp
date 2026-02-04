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
node*findmid(node*head){
    node*slow = head;
    node*fast = head->next;
    while(fast && fast->next){
        slow= slow->next;
        fast= fast->next->next;
    }
    return slow;
}
node*merge_linkedList(node*&head1,node*&head2){
    node*dummmyhead = new node(-1);
    node*ptr1=head1;
    node*ptr2=head2;
    node*ptr3=dummmyhead;
    while(ptr1&&ptr2){
        if(ptr1->val<ptr2->val){
            ptr3->next = ptr1;
            ptr1=ptr1->next;
        }
        else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
       
    }
    if(ptr1){
        ptr3->next = ptr1;
    }
    else{
        ptr3->next = ptr2;
    }
    return dummmyhead->next;
}
node* sortlist(node* head){
    if(head==NULL || head->next==0){
        return head;
    }
    node*mid = findmid(head);
    node*left = head;
    node*right = mid->next;
    mid->next=0;

    // sort RE

    left = sortlist(left);
    right = sortlist(right);
    // merge both left and right

    node*result = merge_linkedList(left,right);
    return result;
}
int main(){
    LinkedList L1;
    L1.insert(4);
    L1.insert(2);
    L1.insert(1);
    L1.insert(3);
    cout<<"Original List: ";
    L1.display();
    L1.head = sortlist(L1.head);
    cout<<"Sorted List: ";
    L1.display();
}