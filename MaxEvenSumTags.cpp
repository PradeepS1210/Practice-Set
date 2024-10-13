/*
Example:
=========
Input: 
Enter the number of tags: 7
Enter the tag values:
1 3 5 2 4 -1 8

Output: Maximum even sum of tag values: 22
*/

#include <bits/stdc++.h>
using namespace std;

int maxEvenSum(vector<int>& tags) {
    int totalSum = 0;
    int smallestOdd = INT_MAX;

    for (int val : tags) {
        totalSum += val;
        if (val % 2 != 0) {
            smallestOdd = min(smallestOdd, abs(val));
        }
    }

    if (totalSum % 2 == 0) {
        return totalSum;
    }

    return totalSum - smallestOdd;
}

int main() {
    int n;
    cout << "Enter the number of tags: ";
    cin >> n;

    vector<int> tags(n);
    cout << "Enter the tag values:\n";
    for (int i = 0; i < n; ++i) {
        cin >> tags[i];
    }

    int result = maxEvenSum(tags);
    cout << "Maximum even sum of tag values: " << result << endl;

    return 0;
}
