#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 9;
int n, x, a[N];

bool f(ll v){
    __int128 c = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] < v){
            c += (v - a[i]);
        }
    }
    return c <= x;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
         cin >> n >> x;
         for(int i = 1; i <= n; i++){
             cin >> a[i];
         }
         ll l = 1, r = 1e18, ans = 1;
         while(l <= r){
             ll m = (l + r) >> 1;
             if(f(m)){
                 ans = m;
                 l = m + 1;
             }else r = m - 1;
         }
         cout << ans << '\n';
    }
    return 0;
}
