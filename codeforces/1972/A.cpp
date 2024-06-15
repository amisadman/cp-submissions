#include<bits/stdc++.h>
using namespace std;


void solve() {
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	vector<int> b(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> b[i];
	}
	
	int count = 0;

	for (int i = 0; i < n; ++i)
	{
		if (a[i] > b[i]) {
			a.pop_back();
			a.insert(a.begin() + i, b[i]);

			count ++;
		}
	}
	cout << count << "\n";

}
int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--)
	{
		solve();
	}

	return 0;
}