/*
Enter a string: aabbcde
 
Character Frequencies:
a: 2
b: 2
c: 1
d: 1
e: 1

Repeated Characters (Pairs):
a (ASCII 97)
b (ASCII 98)

Non-Repeated Characters:
c (ASCII 99)
d (ASCII 100)
e (ASCII 101)

Pair Result Sum (ASCII of repeated characters): 195
Not Pair Result Sum (ASCII of non-repeated characters): 300

Greater Sum: 300
*/

#include <bits/stdc++.h>
using namespace std;

int countCharacterASCII(string s) {
    map<char, int> freq;

    for (auto c : s) {
        freq[c]++;
    }

    int pairResult = 0;
    int notPairResult = 0;

    cout << "\nCharacter Frequencies:\n";
    for (auto q : freq) {
        cout << q.first << ": " << q.second << endl;
    }

    cout << "\nRepeated Characters (Pairs):\n";
    for (auto q : freq) {
        if (q.second >= 2) {
            cout << q.first << " (ASCII " << int(q.first) << ")\n";
            pairResult += int(q.first);
        }
    }

    cout << "\nNon-Repeated Characters:\n";
    for (auto q : freq) {
        if (q.second == 1) {
            cout << q.first << " (ASCII " << int(q.first) << ")\n";
            notPairResult += int(q.first);
        }
    }

    cout << "\nPair Result Sum (ASCII of repeated characters): " << pairResult << endl;
    cout << "Not Pair Result Sum (ASCII of non-repeated characters): " << notPairResult << endl;

    return max(pairResult, notPairResult);
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int result = countCharacterASCII(s);
    cout << "\nGreater Sum: " << result << endl;

    return 0;
}
