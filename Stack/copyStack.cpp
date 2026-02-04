#include<iostream>
#include<stack>
using namespace std;
stack<int> copyStack(stack<int> &input){
    stack<int> temp;
    while(!input.empty()){
        int curr = input.top();
        input.pop();
        temp.push(curr);
    }
}
int main(){
}