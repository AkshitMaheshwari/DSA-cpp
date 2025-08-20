#include<iostream>
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
void insertingAtHead(node*&head,int val){
      node*new_node = new node(val);
      new_node->next = head;
      head = new_node;
}
void insertingAtTail(node*&head,int val){
    node*new_node=new node(val);
    node*temp=head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next  = new_node;
}
void display(node*head){
    node*temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
bool check(node*head1,node*head2){
    node*ptr1 = head1;
    node*ptr2 = head2;
    while(ptr1!=NULL&&ptr2!=NULL){
        if(ptr1->val!=ptr2->val){
            return false;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }

    return(ptr1==NULL&ptr2==NULL);

}
int main(){
    node*head1 = NULL;
    node*head2 = NULL;
    insertingAtHead(head1,3);
    insertingAtHead(head1,4);
    insertingAtHead(head1,5);
    insertingAtHead(head1,6);
    display(head1);
    insertingAtHead(head2,3);
    insertingAtHead(head2,4);
    insertingAtHead(head2,5);
    insertingAtHead(head2,6);
    display(head2);

    cout<<check(head1,head2)<<endl;
    



}
    


        
