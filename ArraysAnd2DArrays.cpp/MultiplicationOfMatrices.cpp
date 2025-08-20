#include<iostream>
using namespace std;
int main(){
    int a[10][10],b[10][10],multi[10][10], r1, r2,c1,c2;
    cout<<"Enter No. of Rows And Columns For Matrix A: ";
    cin>>r1>>c1;
    cout<<"Enter No. of Rows And Columns For Matrix B: ";
    cin>>r2>>c2;
    
    if(c1!=r2){
        cout<<"EROR 404 !!"<<"\n"<<"Matrix Cannot be Multiplied ";

    }
  else{
    cout<<"Enter Element For Matrix A: ";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<"Enter Element A"<<i+1<<j+1<<": ";
            cin>>a[i][j];
        }
    }

    cout<<"Enter Element For Matrix B: ";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<"Enter element B"<<i+1<<j+1<<": ";
            cin>>b[i][j];
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){  
            multi[i][j]=0;

        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                multi[i][j] += a[i][k]*b[k][j];
            }
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<multi[i][j]<<" ";
            if(j==c2-1){
                cout<<endl;
            }
        }
    }
  }
return 0;


}



    
 