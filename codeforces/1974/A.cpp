#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve()
{
    int x, y, n = 0, rem;
    cin >> x >> y;
    if (x > 0 || y >= 1)
    {
        n = 1;
    }
    if (y >= 1)
    {
        n = ceil(float(y) / 2);
    }

    rem = (n * 15) - (y * 4);
    if (x > rem)
    {
        while (x > 0)
        {
            x -= rem;
            rem = 0;
            if (x > rem)
            {
                n++;
                rem = 15;
            }
        }
    }
    cout << n << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}