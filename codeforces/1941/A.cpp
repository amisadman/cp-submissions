#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve()
{
    ll n,m,p,coun = 0;
    cin >> n>>m>>p;
    vector <ll> v1;
    vector<ll>v2;
    for(ll i =0; i<n; i++)
    {
        ll temp ;
        cin >> temp;
        v1.push_back(temp);
    }
    for(ll j =0; j<m; j++)
    {
        ll temp ;
        cin >> temp;
        v2.push_back(temp);
    }

    for(ll k =0; k<n; k++)
    {
        for(ll l =0; l<m; l++)
        {
            if((v1[k]+v2[l])<=p)
            {
                coun ++;
            }
        }
    }
    cout << coun << endl;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
