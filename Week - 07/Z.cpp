#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int prefix[n + 1];
    memset(prefix, 0, sizeof prefix);
    for(int i = 1; i <= n; i++){
        prefix[i] = 1LL * (1LL * prefix[i - 1] + a[i]) % n;
    }
    map<ll, int> cnt;
    cnt[0] += 1;
    ll ans = 0;
    for(int i = 1; i <= n; i++){
        int need = prefix[i] % n;
        if(need < 0) need += n;
        ans += cnt[need];
        cnt[need] += 1;
    }
    cout << ans << '\n';
    return 0;
}
