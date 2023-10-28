#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6 + 9;
int n, m, a[N];

bool f(ll x){
    __int128 cnt = 0;
    for(int i = 1; i <= n; i++){
        cnt += max(0LL, a[i] - x);
        if(cnt >= m)return true;
    }
    return false;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    ll l = 0, r = 1e16, ans = 0;
    while(l <= r){
        ll mid = (l + r) >> 1;
        if(f(mid)){
            ans = mid;
            l = mid + 1;
        }else r = mid - 1;
    }
    cout << ans << '\n';
    return 0;
}
