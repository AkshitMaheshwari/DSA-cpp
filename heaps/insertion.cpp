#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        size= 0;
    }

    void insert(int val){
        // insert val end me
        size+=1;
        int index = size;
        arr[index] = val;

        // now place this val at correct pos
        // so we have to compare this val with its parent and swap 
        // if parent is smaller than this val
        // and parent index is index/2

        while(index>1){
            int parent = index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                break;
            }
        }
    }
};

int main(){
        
}