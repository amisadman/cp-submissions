#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; ++i)
    {
        int tem;cin >> tem;
        v[i] = abs(tem);
    }

    cout << accumulate(v.begin(),v.end(),0) << '\n';
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}