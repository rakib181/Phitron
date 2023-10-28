#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, h;
        cin >> n >> h;
        int a[n + 1];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        auto f = [&](ll R){
            int power = h;
            for(int i = 1; i <= n; i++){
                if(a[i] > R){
                    if(power < a[i])return false;
                    power -= a[i];
                }
            }
            return power > 0;
        };
        ll l = 0, r = 1e10 + 9, ans = 0;
        while(l <= r){
            ll m = (l + r) >> 1;
            if(f(m)){
                ans = m;
                r = m - 1;
            }else l = m + 1;
        }
        cout << ans << '\n';
    }
    return 0;
}
