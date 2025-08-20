// FULL FIBONACCI SERIES 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t1=0;
    int t2=1;
    int next_term=t1+t2;
    cout<<t1<<", "<<t2;
    for(int i=3;i<=n;i++){
        cout<<", "<<next_term;
        t1=t2;
        t2 =next_term;
        next_term=t1+t2;
    }
    
    
}