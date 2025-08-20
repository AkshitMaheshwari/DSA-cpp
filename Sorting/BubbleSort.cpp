#include<iostream>
using namespace std;
void rev(int *a,int *b){
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;
}
void BubbleSort(int arr[],int n){    
         for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
         }
}
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    BubbleSort(array,n);
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}