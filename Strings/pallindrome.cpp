#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
 bool isPalindrome(string s) {
    string new_s="";
    int n=s.length();
    for(int i=n-1;i>=0;i++){
        new_s.push_back(s[i]);
    }
    if(new_s==s){
        return true;
    }
    return false;
}
int main(){
    string s;
    cin>>s;
    cout<<isPalindrome(s);
}