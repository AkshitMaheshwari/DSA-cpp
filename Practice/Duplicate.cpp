#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int count =0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(array[i]==array[j]){
                count++;
                cout<<array[i]<<" ";
            }
            
        }
    }
    cout<<count;
    
}