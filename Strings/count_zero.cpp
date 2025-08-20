#include <iostream>
#include <string>
using namespace std;

int countTrailingZeros(int n) {
    string s = to_string(n);
    int count = 0;

    for (int i = s.length() - 1; i >= 0 && s[i] == '0'; --i) {
        count++;
    }

    return count;
}

int main() {
    int num = 479001600;
    cout << "Trailing zeros: " << countTrailingZeros(num) << endl;
    return 0;
}
