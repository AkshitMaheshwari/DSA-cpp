#include<iostream>
using namespace std;
int main(){
    float x;    
    void*ptr=&x;
    int n;
    cin>>n;
    ptr = &n;

    // VOID Pointers can not be dereferenced directly 

    // Therfore : 

    int *integerPointer = (int *)ptr;
    cout<<*integerPointer<<"\n";
    return 0;
}