#include<iostream> // Time complexity = O(s.length())
#include<string>  
#include<vector>
#include<algorithm>
using namespace std;
string countSort(string s){
   vector<int> freq(26,0);
   for(int i=0;i<s.length();i++){
      int index=s[i]-'a';
      freq[index]++; //storing freq of every char
   }
   int j=0;
   for(int i=0;i<26;i++){
      while(freq[i]--){
         s[j++] = i+'a';
      }
   }
   return s;
}
int main(){
   string s;
   cin>>s;
   cout<<countSort(s);
}

   
   
