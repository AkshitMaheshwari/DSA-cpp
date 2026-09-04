#include<iostream>
#include<vector>
#include<climits>
#include<bits/stdc++.h>
using namespace std;

int sol(vector<int>& coins,vector<int>&dp, int amount){
    if(amount == 0) return 0;
    if(amount < 0) return INT_MAX;
    if(dp[amount]!=-1) return dp[amount];
    int ans = INT_MAX;
    for(int i =0;i<coins.size();i++){
        int sum = sol(coins,dp,amount-coins[i]);
        if(sum!=INT_MAX){
            ans = min(ans,sum+1);
        }
    }
    dp[amount] = ans;
    return ans;
    // if(amount == 1) return 1;
    // if(dp[i])
}

int main(){
    vector<int> coins = {1,2,5};
    int amount;
    cin>>amount;
    vector<int>dp(amount+1,-1);
    int ans = sol(coins,dp,amount);
    if(ans == INT_MAX){
        cout<<-1;
    }
    // else
    cout<<ans;
    // int n = 1;
    
}