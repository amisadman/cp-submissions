#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define bug(a) cout << #a << " : " << a << endl;

void solve() {
    int n; cin >> n;
    vector <int >v (n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    string s(n, 'R');

    if (v[n - 1] - v[0] == 0)cout << "NO" << "\n";
    else {

        s[1] = 'B';
        cout << "YES" << "\n";
        cout << s << "\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int testCase; cin >> testCase;
    while (testCase--) {
        solve();
    }

    return 0;
}