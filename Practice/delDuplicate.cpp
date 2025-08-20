#include<iostream>
using namespace std;
int duplicate(int arr[],int n){
    int k=0;
    //  if(n<=1){
    //     return arr[0];
    //  }
     
     
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    cout<<arr[i]<<" ";
                }
            
            }
        }
    
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   duplicate(arr,n);
}