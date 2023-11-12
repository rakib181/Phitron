#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    int a[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    ll prefix[n + 1];
    memset(prefix, 0, sizeof prefix);
    for(int i = 1; i <= n; i++){
        prefix[i] = prefix[i - 1] + a[i];
    }
    map<ll, int> cnt;
    cnt[0] += 1;
    ll ans = 0;
    for(int i = 1; i <= n; i++){
        ll need = prefix[i] - x;
        ans += cnt[need];
        cnt[prefix[i]] += 1;
    }
    cout << ans << '\n';
    return 0;
}
