/*
Example 1:
----------
Input:
serverCapacity = [4, 5, 6]
serverLoad = [1, 2, 3]

Explanation: 4*3 + 5*2 + 6*1 = 28

Example 2:
----------
Input:
serverCapacity = [7, 8, 9]
serverLoad = [4, 5, 6]

Explanation: 7*6 + 8*5 + 9*4 = 118
*/

#include <bits/stdc++.h>
using namespace std;

int getRedistributedLoad(vector<int> serverCapacity, vector<int> serverLoad) {
    sort(serverLoad.begin(), serverLoad.end(), greater<int>());

    int totalResources = 0;
    for (int i = 0; i < serverCapacity.size(); ++i) {
        totalResources += serverCapacity[i] * serverLoad[i];
    }
    return totalResources;
}

int main() {
    int n;

    cout << "Enter the number of servers: ";
    cin >> n;

    vector<int> serverCapacity(n);
    vector<int> serverLoad(n);

    cout << "Enter the server capacities: ";
    for (int i = 0; i < n; ++i) {
        cin >> serverCapacity[i];
    }

    cout << "Enter the server loads: ";
    for (int i = 0; i < n; ++i) {
        cin >> serverLoad[i];
    }

    int totalResources = getRedistributedLoad(serverCapacity, serverLoad);

    cout << "Total resources: " << totalResources << endl;

    return 0;
}
