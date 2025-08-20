/*#include<iostream>
using namespace std;
int divide(int x , int y){
    int k = x/y;
    return k;
}
int main(){
int x;
int y;
cin>>x>>y;
cout<<divide(x,y);
}*/
#include<iostream>
#include<cmath>

using namespace std;


    int divide(int dividend, int divisor) {
        int k = dividend/divisor;
        if(k> (pow((2,31)-1))){
            return pow(2,31)-1;
        }
        if(k<pow(-2,31)){
            return pow(-2,31);
        }
        else{
            return k;
        }
    }
    int main(){
 int x;
 int y;
 cin>>x>>y;
 cout<<divide(x,y);
    }
