#include<iostream>
#include<queue>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;

char FirstNonrepeat(vector<char> & a){
    vector<int> b(26,0);
    queue<char>q;
    // vector<char> ans;
    for(int i=0;i<a.size();i++){
        b[a[i]-'a']++;
        q.push(a[i]);
        while(!q.empty()){
            if(b[q.front()-'a'] > 1){
                q.pop();
            }
            else{
                // ans.push_back(q.front());
                break;
            }
        }
    }
    if(q.empty()){
        return '#';
    }
    return q.front();
}

int main(){;
    vector<char> a(5);
    for(int i=0;i<5;i++){
        cin>>a[i];
    }   
    cout<<FirstNonrepeat(a);
    return 0;
}
