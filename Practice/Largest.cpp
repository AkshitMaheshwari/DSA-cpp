#include<iostream>
using namespace std;
 int peak(int arr[], int n)
    {   int x;
       int max=arr[0];
       for(int i=0;i<n;i++){
           if(arr[i]>max){
            max = arr[i];
               x=i;
           }
       } 
       return x+1; 
    }
    
    
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<peak(array,n);
   return 0;
}