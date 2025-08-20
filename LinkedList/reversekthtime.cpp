// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int val;
//     node*next;
//     node(int data){
//         val =data;
//         next= NULL;
//     }
// };  
// int main(){
// }

#include <iostream>

using namespace std;

// Node class for the linked list
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Linked list class
class LinkedList {
// private:
public:
    Node* head;
    LinkedList() {
        head = nullptr;
    }

    // Function to add a new node at the end of the linked list
    void insert(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Function to delete alternating elements from the linked list
    void deleteAlternating() {
        Node* current = head;
        Node* nextNext;

        if (current == nullptr)
            return;

        while (current != nullptr && current->next != nullptr) {
            nextNext = current->next->next;
            delete current->next;
            current->next = nextNext;
            current = nextNext;
        }
    }

    // Function to display the linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Destructor to free memory
    ~LinkedList() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);
    list.insert(6);

    cout << "Original List: ";
    list.display();

    list.deleteAlternating();

    cout << "List after deleting alternating elements: ";
    list.display();

    return 0;
}
