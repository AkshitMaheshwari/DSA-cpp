#include<iostream>
using namespace std;

int f(int arr[], int idx,int n){
    if(idx==n-1){
        return arr[idx];
    }

    return arr[idx]+f(arr,idx+1,n);
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<f(array,0,n);
    return 0;
}