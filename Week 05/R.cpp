#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n, h, m, ans = INT_MAX;
        cin >> n >> h >> m;
        for (int i = 0; i < n; i++) {
            int hh, mm;
            cin >> hh >> mm;
            int _h = h, _m = m, cnt = 0;
            while (true) {
                if (_h == hh && _m == mm) {
                    break;
                }
                cnt++;
                _m++;
                if (_m == 60) {
                    _m = 0;
                    _h++;
                    if (_h == 24) {
                        _h = 0;
                    }
                }
            }
            ans = min(ans, cnt);
        }
        cout << ans / 60 << ' ' << ans % 60 << '\n';
    }
    return 0;
}
