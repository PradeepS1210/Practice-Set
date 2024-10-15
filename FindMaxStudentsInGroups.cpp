#include <bits/stdc++.h>
using namespace std;

int maxStudentsInGroups(int N, vector<int>& ids) {
    int evenCount = 0, oddCount = 0;

    for (int id : ids) {
        if (id % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    return min(evenCount, oddCount);
}

int main() {
    int N;
    cout << "Enter number of students: ";
    cin >> N;

    vector<int> ids(N);
    cout << "Enter student IDs: ";
    for (int i = 0; i < N; i++) {
        cin >> ids[i];
    }

    int result = maxStudentsInGroups(N, ids);
    cout << "Maximum students in both groups: " << result << endl;

    return 0;
}
