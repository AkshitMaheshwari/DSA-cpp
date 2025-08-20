#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s ;
    cin>>s;
  
  string k = s;
  reverse(k.begin(),k.end());
  cout<<s;
  cout<<k;

}