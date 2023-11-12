#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a[n + 1]; int mn_i = INT_MAX, mn_j = INT_MAX; ll ans = 0;
        for(int i = 1; i <= n; i++) {
            int m;
            cin >> m;
            for (int j = 0; j < m; j++){
                int x;
                cin >> x;
                a[i].emplace_back(x);
            }
            sort(a[i].begin(), a[i].end());
            mn_i = min(mn_i, a[i][0]);
            mn_j = min(mn_j, a[i][1]);
            ans += a[i][1];
        }
        cout << ans - mn_j + mn_i << '\n';
    }
    return 0;
}
