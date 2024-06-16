#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define bug(a) cout << #a << " : " << a << endl;

void solve() {
	int n; cin >> n;
	vector<int>a(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	if (n == 2) {
		cout << a[0] + a[1] << "\n";
	} else {
		int highest = a[n - 1];
		a.pop_back();
		int max = *max_element(a.begin(), a.end());
		cout << (max + highest) << "\n";
	}


}
int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}