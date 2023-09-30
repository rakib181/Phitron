#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n + 1], odd = 0, mn = INT_MAX;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        odd += (a[i] & 1);
        if(a[i] & 1){
            mn = min(mn, a[i]);
        }
    }
    ll ans = accumulate(a + 1, a + n + 1, 0LL);
    if(odd & 1)ans -= mn;
    cout << ans << '\n';
    return 0;
}