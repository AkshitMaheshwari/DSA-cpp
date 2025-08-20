#include<iostream>
using namespace std;
int main(){
    int r1,r2,c1,c2,a[r1][c1],b[r2][c2],c[0][0];
    cout<<"Enter the no. of rows and columns of Matrix A: ";
    cin>>r1>>c1;
    cout<<"Enter the no. of rows and column of Matrix B: ";
    cin>>r2>>c2;

    if(c1==r2){
        cout<<"ERROR 404 !! MATRIX CAN'T BE MULTIPLIED -_-";
    }
    else{
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<"Enter Element A"<<i+1<<j+1<<": ";
            cin>>a[i][j];
        }

    }
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<"Enter Element B"<<i+1<<j+1<<": ";
            cin>>b[i][j];
        }

    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            c[i][j]=0;
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<r2;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    } 
    cout<<"\n"<<"Hence The Multiplied Matrix is = "<<"\n";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<c[i][j]<<" ";
        }cout<<endl;
    }
}
return 0;
}