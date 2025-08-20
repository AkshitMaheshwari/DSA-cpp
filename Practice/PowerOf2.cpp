#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

string s;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        if(n==pow(2,i)){
            s = "Yess";
            break;
        }
        else{
            s = "No";
        }
    }
    cout<<s;
    
}