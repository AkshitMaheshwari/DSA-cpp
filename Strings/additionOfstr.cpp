#include<iostream>
#include<algorithm>
using namespace std;
int main(){
   string s1,s2;
   cin>>s1>>s2;
   cout<<(s1=s1+s2);
//    IN THIS EK COPY STRING BN RHI HAIN 
//    JO KI EXTRA SPACE BHI LE RHI HAIN
 cout<<"\n";
   cout<<(s1+=s2);
    // IN THIS STRING S1 APNE AAP ME HI APPEND HO GYI KOI
    // EXTRA COPY OR EXTRA SPACE USE NHI HUI 
}