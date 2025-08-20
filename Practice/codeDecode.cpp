#include<iostream>
using namespace std;
void reverse(char *nm){
   int n = sizeof(nm);
    for(int i=n-1;i>=0;i++){
        cout<<nm[i];
    }
}
int main(){
    int n;
    cin>>n;
 char *ptr1;
    char word[n][60];
    cout<<"Want to code or decode? ";
    string m;
    cin>>m;
    if(m=="Code"||m =="code"||m=="CODE"){
    for(int i=0;i<n;i++){
        cin>>word[i];
    }
    for(int i=0;i<n;i++){
    
             
    
    
        ptr1 =word[i]; 
        
        

     
    }
    reverse(ptr1);
    }
}

