/*
Example:
==========
Input: abcaabcd

Output:
a = 3
b = 2
c = 2
d = 1

Pairs
a = 1
b = 1
c = 1

Not Pairs
a
d
*/

#include<bits/stdc++.h>
using namespace std;

int count(string s) {
    map<char, int> freq;
    
    for(auto c : s)
        freq[c]++;
        
    for(auto q : freq)
        cout<<q.first<<" = "<<q.second<<endl;
        
        cout<<"\nPairs\n";
        for(auto q : freq) {
            int count = q.second;
            if(count >= 2) {
                cout<<q.first<<" = "<<count / 2<<endl;
            }
        }
        
        cout<<"\nNot Pairs\n";
        for(auto q : freq) {
            if(q.second % 2 != 0) {
                cout<<q.first<<endl;
            }
        }
        
        return 0;
}

int main() {
    string s;
    getline(cin, s);
    count(s);
}