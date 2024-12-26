/*
Example
---------
Input: 
Size: 8
Elements: 11 7 5 10 46 23 16 8
Sise of length: 3

Output: 5 7 11 46 23 16 10 8
Explanation: The first three flower sticks in an increasing order of the length 
and remaining sticks in the decreasing order of the length. 
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> k;

    if (k > n) {
        return 1;
    }

    sort(arr.begin(), arr.begin() + k);

    sort(arr.begin() + k, arr.end(), greater<int>());

    for (const auto& num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
