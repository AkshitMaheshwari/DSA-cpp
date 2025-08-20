#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n; 
    int m;
    cout<<"Write the numbers between which you have to find the prime numbers : "<<endl;
    cin>>m;
    cin>>n;
    int prime =0,count =0;
    cout<<endl;
    cout<<"Hence the Prime No.s between "<<m<<" & "<<n<<" are : "<<endl;
    for(int i=m;i<=n;i++){
        for(int j=2;j<=sqrt(i);j++){
         if(i%j==0)
            prime++;
        }
         if(prime ==0&&i!=1){
         count++;
         cout<<i<<" ";
         }
         prime =0;
        }
        cout<<endl<<"And the total no of Prime no.s between "<<m<<" & "<<n<<" are : "<<count;
    }
    
/*#include<iostream>
#include<cmath>
using namespace std;
int main(){
   int n;
   cin>>n;
   int count =2;int flag = 1;
   while (count<n){
       if(n%count==0){
        flag =0;
        break;
       }
       count++;
   }
   if(flag){
   cout<<n<<" is a prime no.";
   }
   else{
   cout<<n<<" is not a prime no.";
   

}
}*/