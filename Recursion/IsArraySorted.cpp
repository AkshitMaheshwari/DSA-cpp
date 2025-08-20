#include<iostream>
using namespace std;
// f represents whether x is present in the range [i,n-i]
// or not ?
bool f(int *arr, int n,int i, int x){
    // base case
    if(i==n){
      // array is exhausted
      return false;
    }
    return (arr[i]==x) || f(arr,n, i+1,x);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int x;
    cin>>x;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool result = f(arr, n, 0,x);
    if(result)cout<<"Yess";
    else cout<<"Noo";
    return 0;
    
}