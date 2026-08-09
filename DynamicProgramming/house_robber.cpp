#include<iostream>
#include<vector>
using namespace std;

int house_robber(vector<int> & arr, int i, vector<int> &dp){
    if(i>=arr.size()) return 0;
    if(dp[i]!=-1){
        return dp[i];
    }
    int rob1 = arr[i] + house_robber(arr,i+2,dp);
    int rob2 = house_robber(arr,i+1,dp);
    int ans = max(rob1,rob2);
    dp[i] = ans;
    return ans;
}

int main(){

}