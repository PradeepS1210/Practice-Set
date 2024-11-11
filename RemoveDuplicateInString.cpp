#include<bits/stdc++.h>
using namespace std;

string removeDuplicate(string s) {
    map<char, int> freq;

    string s1;
    for(auto c : s) {
        freq[c]++;
    }

    for(auto q : freq) {
        s1 += q.first;
    }
    
    return s1;
}

int main() {
    string s;
    getline(cin, s);
    
    cout<<removeDuplicate(s);
    return 0;
}
