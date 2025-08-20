#include<iostream>
#include<algorithm>
using namespace std;
class node {
public:
    int data;
    node* next;
    node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {

public:
    node* head;
    LinkedList() {
        head = nullptr;
    }

void insert(int val) {
    node* new_node = new node(val);
    if (head == nullptr) {
        head = new_node;
        return;
    }
    node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = new_node;
}

void display() {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}
};
void remove_kth_node_end(node*&head, int k){
    node*ptr1 = head;
    node*ptr2 = head;
    int count =k;
    while(count--){
        ptr2=ptr2->next;
    }
    if(ptr2==NULL){
        node*temp = head;
        head = head->next;
        free(temp);
        return;
    }
    while(ptr2!=NULL){
        ptr1 =ptr1->next;
        ptr2 =ptr2->next;
    }
    node*temp = ptr1->next;
    ptr1->next=ptr1->next->next;
    free(temp);


}
int main(){
LinkedList l1;
l1.insert(1);
l1.insert(2);
l1.insert(3);
l1.insert(4);
l1.display();
remove_kth_node_end(l1.head,1);
l1.display();
}