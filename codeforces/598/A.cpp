#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    int n; cin >> n;

    ll sum = (ll)n * (n + 1) / 2;
    ll sumOfpow2 = 0;
    for (int i = 1; i <= n; i *= 2)
    {
        sumOfpow2 += i;
    }
    ll ans = sum - 2 * sumOfpow2;

    cout << ans << "\n";
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