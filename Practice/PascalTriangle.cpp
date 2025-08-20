#include<iostream>
using namespace std;
long double fact(int a){
    long double k=1;
    for(int i=1;i<=a;i++){
      k*=i;
    }
return k;   

}   
int main(){
 
 int n;
 cin>>n;
 
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
             cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }cout<<endl;

    }
    return 0;
}
