#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 1];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int ans = INT_MAX;
        for(int i = 1; i <= n; i++){
            int mx = -1;
            if(i + 1 <= n){
                mx = max(mx, abs(a[i] - a[i + 1]));
            }
            if(i - 1 > 0){
                mx = max(mx, abs(a[i] - a[i - 1]));
            }
            if(mx != -1) ans = min(ans, mx);
        }
        cout << ans << '\n';
    }
    return 0;
}
