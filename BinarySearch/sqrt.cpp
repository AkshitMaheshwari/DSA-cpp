#include<iostream>
using namespace std;
int sqrtt(int n){
    int lo= 0;
    int hi = n;
    int mid = lo + (hi-lo)/2;
    int ans=-1;
    while(lo<=hi){
        if(mid*mid ==n){
            return mid;
        }
        if(mid*mid>n){
            hi = mid-1;
        }
        else{
            ans = mid;
            lo = mid+1;
        }
        mid = lo + (hi-lo)/2;
    }
    return ans;

}
int main(){
    int n;
    cin>>n;
    int ans = sqrtt(n);
    int precision;
    cout<<"precision: ";
    cin>>precision;
    double step = 0.1;
    double final_ans = ans;
    for(int i=0;i<precision;i++){
        for(double j=final_ans;j*j<=n;j=j+step){
            final_ans = j;
        }
        step = step/10;
    }
    cout<<final_ans;

    
    
    return 0;

}