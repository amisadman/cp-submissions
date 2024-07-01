#include<bits/stdc++.h>
using namespace std;


void solve() {
    int n, k; cin >> n >> k;
    int s = 0;
    int tmp = 0;
    for (int i = 1;; i += k)
    {
        s = i;
        tmp++;
        if (tmp >= n) break;
    }
    cout << s << '\n';
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