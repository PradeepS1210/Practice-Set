/*
Example:
=========
Input: abca
Output: 2 + 4 = 6.
Explanation:
'a' is a perfect pair it will return 2
'bc' is not the perfect pair it will return 4

=====================================================================================

Input: abcadd
Output: 2 + 4 + 2 = 8
Explanation:
'a' is a perfect pair it will return 2
'bc' is not the perfect pair it will return 4
'd' is a perfect pair it will return 2
*/

#include <bits/stdc++.h>
using namespace std;

int count(string s, int w1, int w2) {
    map<char, int> freq;
    
    for (auto c : s)
        freq[c]++;
        
    int len = s.size();
    int c1 = 0;
    
    for (auto q : freq) {
        if (q.second % 2 != 0) {
            c1++;
        }
    }
    
    int c2 = len - c1;
    
    return (c2 / 2 * w2 + c1 / 2 * w1);
}

int main() {
    string s;
    int w1 = 2, w2 = 4;

    getline(cin, s);
    
    cout << count(s, w1, w2) << endl;
    return 0;
}
