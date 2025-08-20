#include<iostream>
#include<cmath>
using namespace std;
int main(){
   int n,m;
   cout<<"Enter the no. of rows and columns: ";
   cin>>n>>m;
    int array[n][m];
    if(n!=m){
        cout<<"EROR 404 !! -_- INVALID";
    }
    else{

        if(n==3){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
         cout<<"Enter Element A"<<i+1<<j+1<<": ";
         cin>>array[i][j];
        }
    }
    int k;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
         k= (array[0][0])*(array[2][2]*array[1][1] - array[2][1]*array[1][2]) -(array[0][1])*(array[2][2]*array[1][0]-array[2][0]*array[1][2]) + (array[0][2])*(array[2][1]*array[1][0]-array[2][0]*array[1][1]);
        }
    }
    cout<<k;
}
 if(n==2){
    
    for(int i=0;i<2;i++){
       for(int j=0;j<2;j++){
        cout<<"Enter Element A"<<i+1<<j+1<<": ";
        cin>>array[i][j];
       }
    }
    int k;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            k = (array[1][1]*array[0][0]- array[1][0]*array[0][1]);
        }
    }
    cout<<k;
}
}
}




