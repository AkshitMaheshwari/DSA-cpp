#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the no. of rows and columns of Matrix: ";
    cin>>n>>m;
    int array[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter element A"<<i+1<<j+1<<": ";
            cin>>array[i][j]; 
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<array[i][j]<<" ";
        }cout<<endl;
     }
     cout<<"\n"<<"Transpose of Matrix";
     cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=n-1;j>=0;j--){
            cout<<array[j][i]<<" ";
        }cout<<endl;
    }
    return 0;
}