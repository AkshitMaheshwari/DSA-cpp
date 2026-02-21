#include<iostream>
#include<queue>
using namespace std;
class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        this->size=  size;
        arr =  new int[size];
        front = 0;
        rear = 0;

    }
    void push(int data){
        if(rear==size){
            cout<<"Queue is full"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }
    void pop(){
        if(front == rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear = 0;
            }
        }
    }
    int getFront(){
        if(front==rear){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
    int getsize(){
        return rear-front;
    }
};

int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<q.getsize()<<endl;
    q.pop();
    cout<<q.getFront()<<endl;
}