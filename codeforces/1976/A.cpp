#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define bug(a) cout << #a << " : " << a << endl;

void solve()
{
    int n;cin >> n;
    string s,s1; cin >> s;
    for (int i = 0; i < s.length(); ++i)
    {
        if(s[i] >= 'A' && s[i]<= 'Z')
        {
            cout << "No"<< endl;
            return ;
        }

    }
    s1 = s;

    sort(s.begin(),s.end());
    //bug(s);
    
    cout << ((s1 == s)? "YES":"NO")<< endl;

}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;cin >> t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}