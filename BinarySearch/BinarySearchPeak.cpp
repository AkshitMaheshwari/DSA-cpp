#include<iostream>
#include<vector>
using namespace std;
int peakInArray(vector<int>&arr){
    int lo =1, hi=arr.size()-1;
    int ans=-1;
    // int mid = lo + (hi-lo)/2;
    while(lo<hi){
        int mid = lo + (hi-lo)/2;
        
        if(arr[mid]>arr[mid+1]){
            // ans =max(ans,mid);
            hi=mid;
        } else{
            lo=mid+1;
        }
        // mid = lo + (hi-lo)/2;
    }
    return lo;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<peakInArray(arr);

}
