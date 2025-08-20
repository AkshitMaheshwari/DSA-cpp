#include<iostream>
#include<vector>
using namespace std;
int firstOccu(vector<int> &v,int k){
    int lo =0;
    int hi = v.size() -1;
    int ans =-1;
    int mid = lo+(hi-lo)/2;
    while(lo<=hi){
        
        if(v[mid]==k){
          ans = mid;
          hi = mid-1;}
        else if(v[mid]>k){
            hi = mid-1; 
        }
        else{
            lo = mid+1;
        }
        mid = lo+(hi-lo)/2;
       }
   return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cin>>target;
    cout<<firstOccu(v,target);
}
    
