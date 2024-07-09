#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define bug(a) cout << #a << " : " << a << endl;
void solve(int cs = 0) {
    int arr[5][5];
    int row = 0;
    int col = 0;
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }
    row  = abs(row - 2);
    col = abs (col - 2);

    int ans = row + col;
    cout << ans << '\n';


}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}