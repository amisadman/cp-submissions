#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
void solve()
{
    ll a,b,c;
    cin >> a>>b>>c;
    if(a<b && c>b)
    {
            cout << "STAIR"<<endl;
    }
    else if(b>a && b>c)
    {
            cout << "PEAK"<<endl;
    }
    else
        cout << "NONE"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll t;cin>>t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}