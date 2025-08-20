#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    int target;
    cin>>n;
    cin>>target;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k = j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k] == target){
                    cout<<"["<<arr[i]<<","<<arr[j]<<","<<arr[k]<<"]"<<endl;
                }
            }
        }
    }
}