#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        size=0;
    }

    void insert(int val){
        size +=1;
        int index = size;
        arr[index] = val;

        while(index>1){
            if(arr[index]>arr[index/2]){
                swap(arr[index],arr[index/2]);
                index = index/2;
            }
            else{
                break;
            }
        }
    }

    int deletion(){
        int ans = arr[1];
        arr[1] = arr[size];
        size--;
        int index = 1;
        while(index<size){
            int left = 2*index;
            int right = 2*index + 1;
            int largest = index;
            if(left<size && arr[largest]<arr[left]){
                largest = left;
            }

            if(right<size && arr[largest]<arr[right]){
                largest = right;
            }
            if(largest == index){
                break; 
            }
            else{
                swap(arr[index],arr[largest]);
                index = largest;
            }
        }
        return ans;
    }

};

void heapify(int arr[],int n,int i){
    int index = i;
    int left = 2*i;
    int right = 2*i +1;
    int largest = index;
    while(left<n && arr[largest]<arr[left]){
        largest = left;
    }
    while(right<n && arr[largest]<arr[right]){
        largest = right;
    }
    if(index!=largest){
        swap(arr[index],arr[largest]);
        index = largest;
        heapify(arr,n,index);
    }
}