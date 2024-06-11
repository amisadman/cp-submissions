#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    string s,s1;
    cin >> s >> s1;
    
    swap(s1[0],s[0]);
    
    cout << s << " "<< s1 << endl;
}

int main() {
    
    int t;cin >> t;
    while(t--){
        solve();
    }

    return 0;
}