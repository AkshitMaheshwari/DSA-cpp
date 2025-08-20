// Given an array arr, move all 0's to the end of it
// while maintaining the relative order of the non-zero
// elements.
// Note that you must do this in-place of without making 
// a copy of the array.

// INPUT: 0, 5, 0, 3, 42 ;
// OUTPUT: 5, 3, 42, 0, 0 ;

#include<iostream>
#include<vector>
using namespace std;
void swapZerosToEnd(vector<int> &v){
    int n = v.size();
    for(int i=n-1;i>=0;i--){
        int j=0;
        bool flag = false;

        while(j!=i){
            if(v[j]==0 && v[j+1]!=0){
                swap(v[j],v[j+1]);
                flag = true;
            }
            j++;
        }
        if(!flag) break;

    }
    return ;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
    
    swapZerosToEnd(v);

   for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
   }
        
}