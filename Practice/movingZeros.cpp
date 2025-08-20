#include<iostream>
#include<vector>
using namespace std;
void rev(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
void movezero(vector<int> &arr){
    int n=arr.size();
    int i=0;
    for (int j=0;j<n;j++){
        if(arr[j]!=0){
            int *ptr1 = &arr[i];
            int *ptr2 = &arr[j];
            rev(ptr2,ptr1);
            i++;
            
        
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    movezero(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}