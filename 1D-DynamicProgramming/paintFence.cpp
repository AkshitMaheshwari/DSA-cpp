#include<bits/stdc++.h>
using namespace std;

int sol(int n, int k, vector<int>& dp){
    if(n==0) return 1;
    if(n==1) return k;
    if(n==2) return k*k;
    if(dp[n]!=-1) return dp[n];
    dp[n] = sol(n-1,k,dp)*(k-1) + sol(n-2,k,dp)*(k-1);
    return dp[n];
}

int main(){
    // cout<<22;
    int n;
    int k;
    cin>>n>>k;
    vector<int> dp(n+1,-1);
    int ans  = sol(n,k,dp);
    cout<<ans;
}
    