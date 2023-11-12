#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int a[n + 1], h[n + 1];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        for(int i = 1; i <= n; i++){
            cin >> h[i];
        }
        int ans = 0;
        int l = 1; ll sum = 0;
        for(int r = 1; r <= n; r++){
            if(r - 1 >= 1 and (h[r - 1] % h[r]) != 0) {
                sum = a[r];
                l = r;
            }else {
                sum += a[r];
            }
            while(l <= r and sum > k){
                sum -= a[l++];
            }
            if(l != r) ans = max(ans, (r - l + 1));
            else if(a[l] <= k){
                ans = max(ans, 1);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
