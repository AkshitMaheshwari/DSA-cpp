#include<iostream>
#include<queue>
using namespace std;

int main(){
    // min-heap

    priority_queue<int,vector<int>,greater<int> > pq;

    pq.push(3);
    pq.push(6);
    pq.push(9);
    pq.push(4);
    pq.push(8);
    cout<<"TOP Element";    
    cout<<pq.top();
    pq.pop();
    cout<<pq.top();
    pq.pop();
    cout<<pq.top();
    pq.pop();
    
    return 0;
    
}