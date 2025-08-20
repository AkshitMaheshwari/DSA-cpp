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
    node*new_node = new node(val);
    node*temp= head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}
void display(node*head){
    node*temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
node* moveHeadByK(node*head,int k){
    node*ptr=head;
    while(k--){
        ptr=ptr->next;
    }
    return ptr;
}
          
int getLength(node*head){
    node*temp = head;
    int length = 0;
    while(temp!=NULL){
        length++;
        temp = temp->next;
    }
    return length;
}
node* getIntersection(node*head1,node*head2){
    int l1 = getLength(head1);
    int l2 = getLength(head2);
    node* ptr1, *ptr2;
    if(l1>l2){
       int k =  l1-l2;
       ptr1 = moveHeadByK(head1,k);
       ptr2 = head2;
    }
    else{
        int k= l2-l1;
        ptr1 = head1;
        ptr2 = moveHeadByK(head2,k);
    }
    while(ptr1){
        if(ptr1==ptr2){
            return ptr1;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return NULL;


}
int main(){
    node*head1 = NULL;
    node*head2 = NULL;
    insertingAtHead(head1,1);
    insertingAtHead(head1,2);
    insertingAtHead(head1,3);
    insertingAtHead(head1,4);
    insertingAtHead(head1,5);
    insertingAtHead(head2,5);
    insertingAtHead(head2,6);
    insertingAtHead(head2,7);
    insertingAtHead(head2,8);
    insertingAtHead(head2,9);
    insertingAtHead(head2,10);
    insertingAtHead(head2,11);
    insertingAtHead(head2,12);
    insertingAtHead(head2,13);
    display(head1);
    display(head2);
    cout<<getIntersection(head1,head2)<<endl;
    

}


    

    

    

