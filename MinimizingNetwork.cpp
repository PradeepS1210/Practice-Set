/*
Example: 

There are n = 3 connections, the positions of data centers, center = (1, 2, 2), and the positions of the server destinations, destination (5, 2, 4).

The most efficient deliveries are:

• The center at location 1 makes the first connection to the server at location 2.

• The center at location 2 makes the second connection to the server at location 4.

• The center at location 2 makes the third connection to the server at location 5.

The minimum total lag is abs(1-2)+ abs(2-4) + abs(2-5) 1+2+3=6.
*/

#include <bits/stdc++.h>
using namespace std;

int minimum_total(vector<int>& center, vector<int>& destination) {
    sort(center.begin(), center.end());
    sort(destination.begin(), destination.end());

    int total= 0;
    for (size_t i = 0; i < center.size(); ++i) {
        total += abs(center[i] - destination[i]);
    }
    
    return total;
}

int main() {
    int n;
    cout << "Enter the number of data centers and servers: ";
    cin >> n;

    vector<int> center(n), destination(n);

    cout << "Enter the positions of the data centers: ";
    for (int i = 0; i < n; ++i) {
        cin >> center[i];
    }

    cout << "Enter the positions of the servers: ";
    for (int i = 0; i < n; ++i) {
        cin >> destination[i];
    }

    int result = minimum_total(center, destination);
    cout << "Minimum Total: " << result << endl;

    return 0;
}
