#include<iostream>
using namespace std;
void f(int *arr , int idx , int n){
    if(idx==n) return;

    cout<<arr[idx]<<" ";
    f(arr , idx+1 , n);

}
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i =0;i<n;i++){
        cout<<"Enter element A"<<i+1<<": ";
        cin>>array[i];
    }
    f(array,0,n);
    return 0;

}