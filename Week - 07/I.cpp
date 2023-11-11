#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        bool ap_free = true;
        for(int i = 1; i <= n; i++){
            for(int j = i + 1; j <= n; j++){
                for(int k = j + 1; k <= n; k++){
                    ap_free &= ((a[j] - a[i]) != (a[k] - a[j]));
                }
            }
        }
        cout << (ap_free ? "YES\n" : "NO\n");
    }
    return 0;

}
