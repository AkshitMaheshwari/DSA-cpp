#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    int lengthOfLongestNonRepeatingSubstring(string s){
        vector<int> freq(256,-1);
        int left = 0;
        int count = 0;
        for(int right = 0; right < s.size();  right++){
            if(freq[s[right]]>= left){
                left = freq[s[right]] + 1;

            }
            freq[s[right]] = right;

            count = max(count,right-left+1);
        }
        return count;
    }
};

int main(){
    string s;
    cin>>s;
    Solution obj;
    cout<<obj.lengthOfLongestNonRepeatingSubstring(s);
}