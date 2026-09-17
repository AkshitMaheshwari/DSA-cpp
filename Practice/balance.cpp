// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     string s;
//     cin >> s;

//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int leftSum = 0;
//     int rightSum = 0;
//     int ans = 0;

//     for (int i = 0; i < n; i++) {

//         if (s[i] == 'L')
//             leftSum += arr[i];
//         else
//             rightSum += arr[i];

//         if (leftSum == rightSum) {
//             ans++;

//             // Start a new segment
//             leftSum = 0;
//             rightSum = 0;
//         }
//     }

//     cout << ans << endl;
// }
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int countBalancedPartitions(int n, const string& s, const vector<int>& a) {
    long long current_sum = 0;
    int cuts = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') {
            current_sum += a[i];
        } else {
            current_sum -= a[i];
        }

        if (current_sum == 0) {
            cuts++;
        }
    }

    // If total sum is not zero, the entire array cannot be fully partitioned
    if (current_sum != 0) {
        return 0; 
    }

    return cuts;
}

int main() {
    int n = 6;
    string s1 = "LRLRLL";
    vector<int> a1 = {1, 2, 2, 1,0,0};
    cout << countBalancedPartitions(n, s1, a1) << endl; // Output: 1

    string s2 = "LRLR";
    vector<int> a2 = {1, 1, 2, 2};
    cout << countBalancedPartitions(n, s2, a2) << endl; // Output: 2

    return 0;
}