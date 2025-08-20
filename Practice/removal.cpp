#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==val){
               break;
            }
            if(i<n){
                n--;
                for(int j=i;j<n;j++){
                    nums[j]=nums[j+1];
                }
            }
        }
        return n;
    }
int main(){
    int val;
    cin>>val;
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<removeElement(nums,val);
}