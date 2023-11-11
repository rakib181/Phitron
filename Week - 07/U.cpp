#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        int ans = 5 * x;
        for(int i = 1; i < 5; i++){
            int a = i * 2, b = 10 - 2 * i;
            ans = min(ans, i * x + ((b + 3) / 4) * y);
        }
        cout << ans << '\n';
    }
    return 0;

}
