#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(k);
        for(int i = 0; i < k; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int ans = 0;
        for(int i = 0; i < k - 1; i++){
            if(a[i] == 1) ans += 1;
            else ans += a[i] * 2 - 1;
        }
        cout << ans << endl;
    }
    return 0;
}