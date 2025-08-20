 #include<iostream>
 using namespace std;
 int f(int n){
 if(n>=0&&n<=9){
 return n;
 }
 else{
  return f(n/10)+n%10;
 }
 }
int main(){
int i;
cin>>i;
cout<<f(i);
}

