#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>&v,int k,int lo,int hi){
          if(lo>hi) return -1;
         // int mid = (lo+hi)/2;
          int mid = lo + (hi-lo)/2;
          if(v[mid]==k)return mid;
          if(v[mid]<k){
            return binarySearch(v,k,mid+1,hi);
          }      
          else{
            return binarySearch(v,k,lo,mid-1);
          }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k;
    cin>>k;
    cout<<binarySearch(v,k,0,n-1);
}

/** 
 * Time Complexity: o(logn)
 * Space = o(logn)
*/


