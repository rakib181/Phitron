#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 1];
        map<int, int> cnt;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            cnt[a[i]] += 1;
        }
        vector<int> c;
        for(auto [x, y] : cnt){
            c.emplace_back(y);
        }
        sort(c.begin(), c.end());
        int ans = n;
        for(int i = 1; i <= n; i++){
            int idx = -1;
            int l = 0, r = (int) c.size() - 1;
            while(l <= r){
                int m = (l + r) >> 1;
                if(c[m] >= i){
                    idx = m;
                    r = m - 1;
                }else l = m + 1;
            }
            if(idx != -1){
                ans = min(ans, n - (i * ((int) c.size() - idx)));
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
