#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
int n, c, a[N];
 
bool f(int x){
    int cur_pos = a[1];
    int cnt = 1;
    for(int i = 2; i <= n; i++){
        if(a[i] - cur_pos >= x){
            cnt += 1;
            cur_pos = a[i];
        }
    }
    return cnt >= c;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        cin >> n >> c;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        int l = 1, r = a[n] - a[1], ans = 0;
        while(l <= r){
            int m = (l + r) >> 1;
            if(f(m)){
                ans = m;
                l = m + 1;
            }else r = m - 1;
        }
        cout << ans << '\n';
    }
    return 0;
} 
