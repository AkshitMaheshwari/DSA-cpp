#include<iostream>
using namespace std;
 int f(int i,int j,int m,int n){
    if(i==m-1&&j==n-1) return 1;

    if(i>=m||j>=n)return 0;

    return f(i+1,j,m,n)+f(i,j+1,m,n);

 }

int main(){
    int n,m;
    cin>>m>>n;
    cout<<"Hence Total no of path required is = "<<f(0,0,m,n);
    
}