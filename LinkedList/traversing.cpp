#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node*next;
node(int data){
    val=data;
    next = NULL;
}
};
void insertingAtHead(node* &head,int val){
    node*new_node = new node(val);
    new_node->next=head;
    head = new_node;
}
void insertAtTail(node*&head,int val){
    node*new_node = new node(val);
    node*temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = new_node;
}
void insertAtPos(node*&head,int val,int pos){
    if(pos==0){
        insertingAtHead(head,val);
        return;
    }
    node*new_node=new node(val);
    node*temp=head;
    int current_pos=0;
    while(current_pos!=pos-1){
        temp=temp->next;
        current_pos++;
    }
    new_node->next=temp->next;
    temp->next=new_node;
}
void deleteAtTail(node*head){
    node* second_last =head;
    while(second_last->next->next!=NULL){
        second_last=second_last->next;
    }
    node* temp= second_last->next;
    second_last->next=NULL;
    free(temp);

}
void deleteAtAlterate(node*&head){
    node*current_node=head;
    while(current_node!=NULL&&current_node->next!=NULL){
        node*temp = current_node->next;
        current_node->next = current_node->next->next;
        free(temp);
        current_node= current_node->next;
    }
}
void duplicateEle(node*head){
    node*curr_node=head;
    while(curr_node){
        while(curr_node->next &&curr_node->val==curr_node->next->val){
            node*temp=curr_node->next;
            curr_node->next=curr_node->next->next;
            free(temp);    
        }
         curr_node=curr_node->next;
    }
}
void reverseOrder(node*head){
    if(head==NULL){
        return;
    }
    reverseOrder(head->next);
    cout<<head->val<<" ";
        
}
node* reverseLL(node*head){
    // node*prev_ptr = NULL;
    // node*curr_ptr = head;
    // while(curr_ptr!=NULL){
    //     node*next_ptr = curr_ptr->next;  
    //     curr_ptr ->next = prev_ptr;
    //     prev_ptr = curr_ptr;
    //     curr_ptr = next_ptr;
    // }
    // node*new_head = prev_ptr;
    // return new_head;
    if(head==NULL || head->next==NULL){
        return head;
    }
    node*new_head =reverseLL(head->next);
    head->next->next= head;
    head->next = NULL;
    return new_head;

}
void display(node*head){
    node*temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node*head = NULL;
//    int n;
//    cin>>n;
//     for(int i=0;i<n;i++){
//         // cin>>i;
//     insertingAtHead(head,i);
//     }
//     display(head);
//     insertingAtHead(head,1);
//     display(head);
//     insertAtTail(head,3);
//     display(head);
//     insertAtPos(head,4,0);
//     display(head);
//     deleteAtAlterate(head);
//     display(head);
//     deleteAtTail(head);
//     display(head); 
    insertingAtHead(head,1);
    insertingAtHead(head,1);
    insertingAtHead(head,2);
    insertingAtHead(head,2);
    insertingAtHead(head,2);
    insertingAtHead(head,3);
    insertingAtHead(head,3);
    insertingAtHead(head,4);
    insertingAtHead(head,4);
    display(head);          
    duplicateEle(head);    
    display(head);  
    // reverseLL(head);
    // display(head);
    reverseOrder(head);        
    return 0;                
}                          



