#include<iostream>
#include<cmath>
using namespace std;
int root(float x){
   int max =0;
    for(float i=1;i<=x/2;i++){
        
        if(pow(i,2)==x){
          //k = i;
          return i;
          }
        }
       
    }
    
    //return k;

int main(){
    float x;
    cin>>x;
    cout<<root(x);

}