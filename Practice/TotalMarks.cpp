#include<iostream>
using namespace std;
int main(){
    
    int subject1;
    int subject2;
    cin>>subject1;
    cin>>subject2;
    int total = subject1+subject2;
    if(total>=40&&subject1>=16&&subject2>=16){
        cout<<"Hence You are passed";
    }
    else{
        cout<<"Sorry u r fail";
    }
    return 0;
}