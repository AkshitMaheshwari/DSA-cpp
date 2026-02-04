#include <iostream>
#include <string>
using namespace std;
const int MAX_SIZE = 10;
class Stack {
private:
 int arr[MAX_SIZE];
 int topIndex;
public:
 Stack() {
 topIndex = -1;
 }
 bool isEmpty() {
 return topIndex == -1;
 }
 bool isFull() {
 return topIndex == MAX_SIZE - 1;
 }
 void push(int value) {
 if (isFull()) {
 cout << "Stack Overflow: Cannot push element " << value << ". Stack is full." <<
endl;
 } else {
 arr[++topIndex] = value;
 cout << value << " pushed to stack." << endl;
 }
 }
 void pop() {
 if (isEmpty()) {
 cout << "Stack Underflow: Cannot pop element. Stack is empty." << endl;
 } else {
 cout << arr[topIndex--] << " popped from stack." << endl;
 }
 }
 int peek() {
 if (isEmpty()) {
 cout << "Stack is empty." << endl;
 return -1;
 } else {
 return arr[topIndex];
 }
 }
 void display() {
 if (isEmpty()) {
 cout << "Stack is empty." << endl;
 } else {
 cout << "Stack elements: ";
 for (int i = 0; i <= topIndex; i++) {
 cout << arr[i] << " ";
 }
 cout << endl;
 }
 }
};
int main() {
 Stack s;
 int choice, value;
do {
 cout << "\n--- Stack Operations Menu ---" << endl;
 cout << "1. Push" << endl;
 cout << "2. Pop" << endl;
 cout << "3. Peek (Top)" << endl;
 cout << "4. Check if Empty" << endl;
 cout << "5. Check if Full" << endl;
 cout << "6. Display Stack" << endl;
 cout << "7. Exit" << endl;
 cout << "Enter your choice: ";
 cin >> choice;
 switch (choice) {
 case 1:
 cout << "Enter value to push: ";
 cin >> value;
 s.push(value);
 break;
 case 2:
 s.pop();
 break;
 case 3:
 value = s.peek();
 if (value != -1) {
 cout << "Top element is: " << value << endl;
 }
 break;
 case 4:
 if (s.isEmpty()) {
 cout << "Stack is empty." << endl;
 } else {
 cout << "Stack is not empty." << endl;
 }
 break;
 case 5:
 if (s.isFull()) {
 cout << "Stack is full." << endl;
 } else {
 cout << "Stack is not full." << endl;
 }
 break;
 case 6:
 s.display();
 break;
 case 7:
 cout << "Exiting program." << endl;
 break;
 default:
 cout << "Invalid choice. Please try again." << endl;
 break;
 }
 } while (choice != 7);
 return 0;
}
