#include<iostream>
using namespace std;

void process(int *array, int n){
    for(int i=0;i<n;i++){
        cout<<*(array+i)<<" ";
    }

    *(array+1) = 33; // You can change the value of array like this 

}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    process(array,n);
    cout<<"\n";

    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;

    

  

}