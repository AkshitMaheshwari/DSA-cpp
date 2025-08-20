#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int k;
    cin>>k;
    k=k%n;
    int fin_arr[5];
    int j=0;
    for(int i=n-k;i<n;i++){
        fin_arr[j++] = arr[i];
    }
    for(int i=0;i<=k;i++){
        fin_arr[j++]= arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<fin_arr[i]<<" ";
    }
    return 0;
}