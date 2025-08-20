#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s = "Mankiemagehithe";
    cout<<s.substr(1,4);
    cout<<"\n";
    // IN THIS FUNC FIRST IS THE INDEX FROM WHERE U WANT U 
    // WANT UR SUBSTRING AND THE NEXT ONE IS THE LENGTH TILL
    // WHICH U WANT THE SUBSTRING 
    
    // IF WE DIDN'T WRITE THE LENGTH THEN
    cout<<s.substr(1);


}