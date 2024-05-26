#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define bug(a) cout << #a << " : " << a << endl;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, v = 0;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "++X" || s == "X++")
        {
            v++;
        }
        if (s == "--X" || s == "X--")
        {
            v--;
        }
    }
    cout << v << endl;

    return 0;
}