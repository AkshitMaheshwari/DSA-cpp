#include<iostream>
using namespace std;
void f(int n,int k){
   
   //   FOR RECURSION :

    // Base Case: 
    if(k<=0)return;

    // Assumption:
    f(n,k-1); // It means the function correctly prints the K-1 multiples 
  
  // Self Work:
  cout<<n*k<<" ";
    
  // For Iteration :

  // for(int i=1;i<=k;i++){
     // cout<<n*i<<" ";
   // }
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    f(n,k); 
}