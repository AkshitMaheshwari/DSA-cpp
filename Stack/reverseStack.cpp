#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int>&st,int target){
    if(st.empty()){
        st.push(target);
        return;
    }
    int topele = st.top();
    st.pop();
    insertAtBottom(st,target);
    st.push(topele);
}
void revStack(stack<int>&s){
    if(s.empty()){
        return;
    }
    // base case

    // pehla step:-
    int topEle = s.top();
    s.pop();
    // ab isko kab insert krenge jab pora stack rev ho gya ho
    // recursive call
    revStack(s);
    // ab insert krenge at bottom
    // insertAtBottom(s,topEle);
    insertAtBottom(s,topEle);
}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    revStack(s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}