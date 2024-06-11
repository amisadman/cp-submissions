#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int mxsum = 0;
    int optimal = 2;

    for (int x = 2; x <= n; ++x) {
        int k = n / x;
        int sum = x * (k * (k + 1)) / 2;
        if (sum > mxsum) {
            mxsum = sum;
            optimal = x;
        }
    }

    cout << optimal << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}