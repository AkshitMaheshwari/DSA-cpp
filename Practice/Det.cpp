#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int a[n][m];
    if(n!=m){
        cout<<"INVALID";
    }
    
    if(n==m&&n==3){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<"Enter Element A"<<i+1<<j+1<<": ";
                cin>>a[i][j];
            }
        }
      int k;  
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<a[1][1]*(a[3][3]*a[2][2]-a[3][2]*a[2][3]) - a[1][2]*(a[3][3]*a[2][1]-a[3][1]*a[2][3]) + a[1][3]*(a[3][2]*a[2][1]-a[3][1]*a[2][2]);
            }
        }
        
    }
    if(n==2){
    int k;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            k = a[2][2]*a[1][1]-a[2][1]*a[1][2];
        }
    }
    cout<<k;
    }
    
    
}