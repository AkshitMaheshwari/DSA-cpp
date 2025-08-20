#include<iostream>
using namespace std;
void Swp(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
 int n,m;
 cin>>n>>m;
//  int *ptr1 = &n;
//  int *ptr2 =&m;
 Swp(&n,&m);
 cout<<n<<" "<<m;
 
}   
