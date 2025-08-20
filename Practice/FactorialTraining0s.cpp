#include<iostream>
using namespace std;
int fact(int n){
    int k=1;
    for(int i=1;i<=n;i++){
        k*=i;
    }
     int a = k%10;
    if(a==0){
        return 1; return k;
    }
    else{
        return 0; return k;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}


