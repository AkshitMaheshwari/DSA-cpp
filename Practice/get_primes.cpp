#include<iostream>
#include<vector>
using namespace std;
vector<int> getPrimes(int N,int M){
    vector<int> mprimes;
    vector<int>prime(N+1,true);
    for(int p=2;p*p<=N;p++){
        if(prime[p]){
            for(int i=p*p;i<=N;i+=p){
                prime[i]=false;
            }
        }
        int cnt =0;
        for(int i=2;i<=N;i++){
            if(prime[i]){
                mprimes.push_back(i);
                cnt++;
            }
            if(cnt>=M){
                break;
            }
        }
    }
    return mprimes;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int> a;
    a = (getPrimes(n,m));
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}