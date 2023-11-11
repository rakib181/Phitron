#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int mx = max({a, b, c, d});
        int tot = a + b + c + d;
        tot -= mx;
        if(mx > tot)cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;

}
