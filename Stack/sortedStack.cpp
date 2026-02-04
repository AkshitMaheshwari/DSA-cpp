#include<iostream>
#include<stack>
using namespace std;
void insertInSortedStack(stack<int>&st,int target){
    if(st.empty() || st.top()>=target){
        st.push(target);
        return;
    
    }
    int topele = st.top();
    st.pop();
    insertInSortedStack(st,target);
    st.push(topele);

}
void SortStack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int topEle = st.top();
    st.pop();
    SortStack(st);
    insertInSortedStack(st,topEle);
}
int main(){
    stack<int> s;
    s.push(30);
    s.push(20);
    s.push(40);
    s.push(10);
    s.push(50);
    SortStack(s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}