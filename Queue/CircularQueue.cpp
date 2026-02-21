#include<iostream>
using namespace std;
class CirQueue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    CirQueue(int size){
        this->size = size;
        arr = new int[size];
        front=-1;
        rear= -1;
        
    }
    void push(int data){
        if((front==0 && rear==size-1)){
            cout<<"Queue is full"<<endl;
        }
        else if(front ==-1){
            front = rear =0;
            arr[rear] = data;

        }
        else if(rear == size-1 && front !=0){
            rear =0;
            arr[rear] = data;
        }
        else{
            
        }
    }
};