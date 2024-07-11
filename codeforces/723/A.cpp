#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define bug(a) cout << #a << " : " << a << endl;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int>v(3);
    for (int i = 0; i < v.size(); ++i)
    {
        cin >> v[i];
    }

    sort(v.rbegin(), v.rend());

    int ans = (v[0] - v[1]) + (v[1] - v[2]);
    cout << ans << '\n';



    return 0;
}