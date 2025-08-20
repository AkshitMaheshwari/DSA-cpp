#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    int target;
    cin>>target;
    vector<int> arr = {1,2,3,4,5};
    int m = arr.size();
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            for(int k=j+1;k<m;k++){
                

        if(arr[i]+arr[j]+arr[k]==target){
            cout<<"["<<arr[i]<<","<<arr[j]<<","<<arr[k]<<"]"<<endl;
    
            }
        }
        }
    }
}