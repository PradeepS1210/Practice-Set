/*
Example 1:
Input: 
5
1 2 3 4 5
3
2 4 35

Output: 3
Explanation: 1 - 2 + 3 - 4 + 5 = 3
======================
Example 2:
Input:
6
11 23 34 14 21 16
4
10 16 34 7

Output: 19
Explanation: 11 + 23 - 34 + 14 + 21 - 16 = 19
*/

#include <bits/srdc++.h>
using namespace std;

int addSub(vector<int>& arr1, vector<int>& arr2) {
    int result = 0;

    for (int i = 0; i < arr1.size(); i++) {
        bool found = false;
        
        for (int j = 0; j < arr2.size(); j++) {
            if (arr1[i] == arr2[j]) {
                found = true;
                break;
            }
        }
        
        if (found) {
            result -= arr1[i];
        } else {
            result += arr1[i];
        }
    }

    return result;
}

int main() {
    int n, m;
    
    cin >> n;
    vector<int> arr1(n);

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cin >> m;
    vector<int> arr2(m);

    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    int result = addSub(arr1, arr2);
    
    cout << result << endl;

    return 0;
}
