 
//  // SUM OF ELEMENTS 
           
// #include<iostream>
// #include<climits>
// using namespace std; 
// int main(){
//     int n;
//     cin>>n;
//     int array[n];
//     for(int i=0;i<n;i++)
// {
//     cout<<"enter Elements A"<<i+1<<": ";
//     cin>>array[i];
// }
// int sum =0;
// for(int i=0;i<n;i++){
//     sum+=array[i];
//     }
//     cout<<sum;
// return 0;
// }
 

  // MINIMUM OR SMALLEST ELEMENT

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<min;
}


   
