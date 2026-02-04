#include<iostream>
// #include<stack>
#include<climits>
using namespace std;
class Stack{
    int *arr;
    int top;
    int capacity;
    public:
    Stack(int c ){
        this->capacity = c;
        arr= new int[c];
        this->top = -1;
    }
    void push(int data){
        if(this->top == this->capacity-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }
    int pop(){
        if(this->top==-1){
            cout<<"Stack Underflow"<<endl;
            return INT_MIN;
        }
        this->top--;
    }
    int toppos(){
        if(this->top==-1){
            cout<<"Underflow"<<endl;
            return INT_MIN;
        }
        return this->arr[this->top];
    }
};
int main(){
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<s.toppos()<<"\n";
    s.pop(); 
    cout<<s.toppos()<<"\n";
}