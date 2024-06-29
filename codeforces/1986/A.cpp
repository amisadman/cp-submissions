#include<bits/stdc++.h>
using namespace std;

void solve() {

    vector<int>v(3);

    for (int i = 0; i < 3; ++i)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int result = abs(v[1] - v[1]);

    for (int i = 0; i < 2; ++i)
    {
        result += abs(v[i] - v[i + 1]);
    }
    cout << result << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}