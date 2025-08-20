// Given two strigns 's' and 't', return true if 't'
// is an anagram of 's', and false otherwise. 

// Anagram means that rearranging a word to form an 
// another word from that word 

// input 1: 'anagram'
// input 2: 'nagaram'
// Thereforen string 1 and 2 are anagram

// So if we sort the two string we can get this problem
// solved

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string countSort(string s){
    vector<int>freq(26,0);
    for(int i=0;i<s.length();i++){
        int index = s[i]-'a';
        freq[index]++;
    }
    int j=0;
    for(int i=0;i<26;i++){
        while(freq[i]--){
            s[j++]=i+'a';
        }
    }
    return s;
}
int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    string s1_new=countSort(s1);
    string s2_new=countSort(s2);
    if(s1_new==s2_new){
        cout<<"Yes";
    }
    else{
        cout<<"no";
    }



}