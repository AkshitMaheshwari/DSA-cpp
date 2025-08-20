#include<iostream>
#include<vector>
using namespace std;
// GIVEN THE ARRAY SHOULD BE SORTED 
// THIS CODE WILL NOT SORT THE ARRAY
// SO YOU MIGHT GET SOME ERROR OR WRONG ANSWER
// BY GIVING UNSORTED ARRAY AS INPUT
int binarySearch(vector<int> &v,int target){
      int lo = 0;
      int hi = v.size()-1;
      while(lo<=hi){
        int mid = lo + (hi-lo)/2; /*Mid formula can be problamatic*/
        if(v[mid]==target) return mid; // because it can 
        else if(v[mid]<target){ // exceed the int limit so 
        lo = mid+1; // We can use mid = (lo+hi+lo-lo)/2
      }             // mid = lo + (hi-lo)/2
         else{
           hi = mid-1;
        } 
     }
     return -1;
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
  cout<<binarySearch(v,k);
}
        
      

  
  



