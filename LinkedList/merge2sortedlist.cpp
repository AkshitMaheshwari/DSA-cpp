#include<iostream>
#include<vector>
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
        if(head == NULL){
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
        node*temp =head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

};
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
node*mergeKlinked_list(vector<node*>&lists){
    if(lists.size()==0){
        return NULL;
    }
    while(lists.size()>1){
        node*mergeHead = merge_linkedList(lists[0],lists[1]);
        lists.push_back(mergeHead);
        lists.erase(lists.begin());
        lists.erase(lists.begin());
    }
    return lists[0];
}
    
int main(){
    LinkedList l1,l2,l3;
    l1.insert(1);
    l1.insert(2);
    l1.insert(6);
    l1.insert(7);
    l1.display();
    l2.insert(3);
    l2.insert(4);
    l2.insert(11);
    l2.display();
    l3.insert(5);
    l3.insert(9);
    l3.display();
    vector<node*> lists;
    lists.push_back(l1.head);
    lists.push_back(l2.head);
    lists.push_back(l3.head);
    LinkedList mergedLL;
    mergedLL.head = mergeKlinked_list(lists);
    mergedLL.display();

}