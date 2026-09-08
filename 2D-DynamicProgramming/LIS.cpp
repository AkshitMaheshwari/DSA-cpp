#include<bits/stdc++.h>
using namespace std;
int sol(int prev, int curr, vector<int> & arr, vector<vector<int>> &dp){
    if(curr>=arr.size()) return 0;
    if(dp[curr][prev+1]!=-1) return dp[curr][prev+1];
    int include =0;
    if(prev==-1 || arr[prev]<arr[curr]){
        include = 1 + sol(curr,curr+1,arr,dp);
    }
    int exclude = 0 + sol(prev,curr+1,arr,dp);
    int maxm = max(exclude,include);
    dp[curr][prev+1] =  maxm;
    return maxm;
}

int main(){
    int prev=-1;
    int curr = 0;
    vector<int> arr = {1,2,4,6,9,3,5,8};
    int n = arr.size();
    vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
    int ans = sol(prev,curr,arr,dp);
    cout<<ans;
}