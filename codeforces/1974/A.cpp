#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve()
{
    int x, y;
    cin >> x >> y;
    int n = 0;
    if(x >  0 || y >= 1)
    {
        n = 1;
    }
    if(y >= 1)
    {
        n = ceil(float(y)/2);
        //cout << "n in ceil "<< n<<endl;
    }
    
        int rem = (n * 15) - (y * 4);
       // cout << "rem "<< rem << endl;
        if (x > rem)
        {
            while (x > 0)
            {
                //cout << "n "<< n<<" rem "<<rem<<" x "<<x<< endl;
                x -= rem;
                rem = 0;
                if(x > rem)
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