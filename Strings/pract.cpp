// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     string b;
//     cin>>b;
//     int k = s.size();
//     int l = b.size();
//     cout<<k<<" "<<l<<endl;
//     string a = s+b;
//     cout<<a<<endl;
//     swap(s[0],b[0]);
//     cout<<s<<" "<<b;
// }
#include <iostream>
using namespace std;

// int main() {
    // int num, reversed = 0;
//     cout << "Enter a number: ";
//     cin >> num;

//     while (num != 0) {
//         int digit = num % 10;           // get last digit
//         reversed = reversed * 10 + digit;  // append digit
//         num = num / 10;                 // remove last digit
//     }

//     cout << "Reversed number: " << reversed << endl;

//     return 0;
// }

bool isPalindrome(int x) {
        int rev=0;
        while(x!=0){
            int digit = x%10;
            rev = rev*10 + digit;
            x = x/10;
        }
        // cout<<rev;
        if (rev==x){
            return true;
        }
        else{
            return false;
        }

}
int main() {
    int num = 0;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }

    return 0;
}