#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, m, h;
        cin >> n >> m >> h;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        vector<ll> fuel;
        for(int i = 0; i < m; i++){
            int x;
            cin >> x;
            fuel.emplace_back(1LL * x * h);
        }
        sort(fuel.rbegin(), fuel.rend());
        int l = 0, r = 0; ll ans = 0;
        while(l < n and r < m){
            ans += min(fuel[r], 1LL * a[l]);
            r += 1, l += 1;
        }
        cout << ans << '\n';
    }
    return 0;
}
