// A STRING IS ISOMORPHIC WHEN THERE IS ONE TO ONE 
// MAPPING
// FOR EX: 'S' = EGG & 'T' = ADD
// SO: 'E'->'A' , 'G'->'D'

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool isIsomorphic(string s1,string s2){
    vector<int> v1(128,-1);
    vector<int> v2(128,-1);
    if(s1.size()!=s2.size()){
        return false;
    }
    for(int i=0;i<s1.size();i++){
        if(v1[s1[i]]!=v2[s2[i]]){
            return false;
        }
        v1[s1[i]]=v2[s2[i]]=i;
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    string s1;
    cin>>s1;
    cout<<isIsomorphic(s,s1);
}

        
    


