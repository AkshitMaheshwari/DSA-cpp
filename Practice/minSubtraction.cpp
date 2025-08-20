#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
         cin>>array[i];
    }
    int min = array[0];
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(array[j]-array[i]<=min){
            min=array[j]-array[i];
        }
        }
     }
     cout<<min;
}