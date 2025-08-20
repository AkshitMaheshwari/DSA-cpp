#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int k=1;
    int n;
    cin>>n;
    if(n%2 ==0 ){
        
             k = n/2*(pow(1/2,log(n))-1)/(1/2-1);
        }
    
    cout<<k;
}
