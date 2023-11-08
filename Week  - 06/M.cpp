#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        ll n, m;
        cin >> n >> m;
        cout << (((n * m) & 1LL) ? "NO\n" : "YES\n");
    }
    return 0;
}
