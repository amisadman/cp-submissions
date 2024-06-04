#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k = 0, n, m;
    cin >> n >> m;
    vector<int> v(7);
    string s;
    cin >> s;

    for (int i = 0; i < n; i++) {
        int tmp = s[i] - 'A';
        v[tmp] ++;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 7; j++) {
            if (v[j] == 0) k++;
            else v[j] -= 1;
        }
    }

    cout << k << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}