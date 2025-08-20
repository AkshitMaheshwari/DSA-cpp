#include<iostream>
#include<vector>
using namespace std;

void f(int *arr, int n, int i ,int sum, vector<int> &result){
    // base case
    if(i==n){
        result.push_back(sum);
        return;
    }
  f(arr, n,i+1,sum+arr[i], result); // Pick the ith element
  f(arr, n, i+1, sum, result); // donot pick the ith element
}
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
       cin>>array[i];
    }
    vector<int> result;
    f(array,n,0,0,result);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}