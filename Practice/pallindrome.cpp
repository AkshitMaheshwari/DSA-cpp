#include<iostream>

using namespace std;
int main(){
    int n ;
    cin>>n;
     int digit =0;
    while(n>0||n<0){
      int num = n%10;
       digit = (digit*10)+num;
      
      n=n/10;
    }
    cout<<digit;
    if(n==digit){
      cout<<"Yess it's a Pallindrome";

    }
    else{
      cout<<endl<<"OOPS!! No it's not a pallindrome";
    }
}