#include<iostream>
#include<cmath>
using namespace std;

void f(float n){
    if(n<1) return;
    f(n-1);
    cout<<n/(n*n+n)<<" ";
}
int main(){
    float n;
    cin>>n;
    f(n);
    return 0;
}

    

    
