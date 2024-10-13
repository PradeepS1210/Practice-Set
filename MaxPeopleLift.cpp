/*
Example:
=========
Input: 
5 100
40 30 20 50 10

Output: 3

Explanation:
After sorting the weights: [10, 20, 30, 40, 50]
The lift can accommodate the first 3 people with weights 10, 20, and 30 (total 60 units).
Adding the next person with weight 40 exceeds the capacity (60 + 40 = 100, which is the limit), but adding another person would exceed it. Hence, the result is 3 people.
*/

#include <bits/stdc++.h>
using namespace std;

// N is the number of people.
// X is the maximum weight capacity of the lift.
// A is a vector that contains the weights of people.

int maxPeopleInLift(int N, int X, vector<int>& A) {
    sort(A.begin(), A.end());
    
    int count = 0;
    int currentWeight = 0;
    
    for(int i = 0; i < N; ++i) {
        if(currentWeight + A[i] <= X) {
            currentWeight += A[i];
            ++count;
        } else {
            break;
        }
    }
    
    return count;
}

int main() {
    int N, X;
    cin >> N >> X;
    
    vector<int> A(N);
    for(int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    cout << maxPeopleInLift(N, X, A) << endl;
    
    return 0;
}