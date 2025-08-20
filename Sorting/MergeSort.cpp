#include<iostream>
using namespace std;
void merge(int arr[],int l,int mid, int r){
    int n=mid-l+1;
    int m=r-mid;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++){
        a[i]= arr[l+i];
    }
    for(int j=0;j<m;j++){
        b[j]= arr[mid+1+j];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n&&j<m){
        if(a[i]<b[j]){
            arr[k++]=a[i++];
        }
        else{
            arr[k++]=b[j++];
        }
    }
    while(i<n){
        arr[k++]= a[i++];
    }
    while(j<m){
        arr[k++]=b[j++];
    }
}
void mergeSort(int arr[],int l,int r){
    if(l>=r){
        return;
    }
    int mid = (l+r)/2;
    mergeSort(arr , l, mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);

}
int main(){
    int x;
    cin>>x;
    int arry[x];
    for(int i=0;i<x;i++){
        cin>>arry[i];
    }
    cout<<"Sorted Array: "<<endl;
    mergeSort(arry,0,x-1);
    for(int i=0;i<x;i++){
        cout<<arry[i]<<" ";
    }
}
