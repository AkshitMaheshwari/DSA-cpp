#include<iostream>
using namespace std;
// we can solve it using floyd's cycle detection algorithm
// SLOW and FAST pointer approach
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
        head = NULL;
    }
    void insert(int val){
        node*new_node = new node(val);
        if(head==NULL){
            head=new_node;
            return;
        }
        node*temp =head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next= new_node;
    }
    void display(){
        node*temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

bool checkLoop(node* &head){
    if(head==NULL){
        return false;
    }
    node*slow = head;
    node*fast = head;
    while(fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast= fast->next;
            slow = slow->next;
        }
        if(slow==fast){
            return true; // loop detected
        }
    }
    return false; // no loop
}

int main(){
    LinkedList l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.insert(4);
    l1.insert(5);
    l1.insert(6);
    l1.display();
    // Creating a loop for testing
    l1.head->next->next->next->next->next->next = l1.head->next->next; // 6 points to 3
    // l1.display();
    if(checkLoop(l1.head)){
        cout<<"Loop detected in linked list"<<endl;
    }
    

}