#include<iostream>
#include<vector>
using namespace std;
int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(nums[i]==nums[j]){
                  
                }
            }
        }
       
    }
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<findDuplicate(v);
}