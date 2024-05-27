#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define bug(a) cout << #a << " : " << a << endl;
void solve()
{
    int n,m;cin>> n>> m;
    if(n<m)
        cout << "NO"<< endl;
    if(n ==m) 
        cout << "YES"<< endl;
    else
    {
        if(n>m)
        {
            n -= m;
            if(n%2 == 0)
            {
                cout << "YES"<< endl;
            }
            else
                cout << "NO"<< endl;
        }
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;cin>> t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}