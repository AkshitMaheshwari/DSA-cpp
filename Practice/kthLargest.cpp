#include<iostream>
#include<vector>
using namespace std;
int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i=0;i<n-1;i++){
             for(int j=0;j<n-i-1;j++){
                 if(nums[j]>nums[j+1]){
                     swap(nums[j],nums[j+1]);

                 }
             }
        }
        return nums[n-k];
        
    }

int main(){
int n;
cin>>n;
vector<int> nums(n);
int k;
cin>>k;
for(int i=0;i<n;i++){
    cin>>nums[i];
}
cout<<findKthLargest(nums,k);
}