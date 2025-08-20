#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& arr, int target){
     int n=arr.size();
     int m = arr[0].size();
     int lo=0,hi=n*m-1;
     while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        int x = mid/m;
        int y = mid%m;
        if(arr[x][y]==target){
            return true;
        }
        else if(arr[x][y]<target){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
     }
     return false;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;
    cout<<searchMatrix(arr,target);
}