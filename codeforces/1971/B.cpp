#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve()
{
	string s;cin >> s;
	bool difrnt = false;
	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i] != s[0])
		{
			swap(s[0],s[i]);
			difrnt = true;
			break;
		}
	}
	//cout << difrnt << endl;
	if(difrnt)
	{
		cout << "YES" << endl;
		cout << s << endl;
	}
	else
		cout << "NO"<< endl;
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