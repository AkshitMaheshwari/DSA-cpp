#include<iostream>
#include<vector>
#include<algorithm>
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
        head = NULL;
    }
    void insert(int val){
        node*new_node = new node(val);
        if(head==NULL){
            head = new_node;;
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
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
bool detectCycle (node*head){
    if(!head){
        return false;
    }
    node*slow = head;
    node*fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next;
        
        if(slow == fast){
            return true;
        }
    }
    return false;
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
    l1.display();
    l1.head->next->next->next->next->next->next->next->next = l1.head->next->next;
    cout<<detectCycle(l1.head)<<endl;

}