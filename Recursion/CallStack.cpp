#include<iostream>
using namespace std;
int f(int n){
    if(n==1)
    return 1;
    int ans = n*f(n-1);
}
int main(){
    int i;
    cin>>i;
    cout<<f(i);
    return 0;
}


