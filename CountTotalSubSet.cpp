#include<bits/stdc++.h>
using namespace std;

vector<int> findCountSubSet(vector<int>p) {
    
    int N = p.size();
    
    for(int i=0; i<(1<<N); i++) {
        cout<<"{";
        for(int j=0; j<N; j++) {
            if(i & (1<<j))
            cout<<p[j];
        }
        cout<<"}"<<endl;
    }
    cout<<"Total Subset is: "<<(1<<N);
}

int main() {
    int n;
    cin>>n;
    
    vector<int>arr(n);
    
    for(int i=0; i<n; i++)
    cin>>arr[i];
    findCountSubSet(arr);
    
    return 0;
}