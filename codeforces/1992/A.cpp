#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define bug(a) cout << #a << " : " << a << endl;

void solve() {

    vector<int > v(3);
    for (int i = 0; i < 3; ++i)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < 5; ++i)
    {
        v[0]++;
        sort(v.begin(), v.end());
    }

    cout << v[0]*v[1]*v[2] << '\n';
}
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}