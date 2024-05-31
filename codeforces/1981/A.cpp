#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define bug(a) cout << #a << " : " << a << endl;
void solve()
{
    ll l,r,n = 0;
    cin >> l >> r;

    while(r != 1)
    {
        r/= 2;
        n ++;
    }
    cout << n << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll t;cin >> t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}