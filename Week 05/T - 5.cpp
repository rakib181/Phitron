#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll n, s;

bool f(ll x){
    ll sum = x;
    int sd = 0;
    while(x){
        sd += (x % 10);
        x /= 10;
    }
    return sum - sd >= s;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> s;
    ll l = 0, r = n + 1, ans = n + 1;
    while(l <= r){
        ll m = l + (r - l) / 2;
        if(f(m)){
            ans = m;
            r = m - 1;
        }else l = m + 1;
    }
    cout << n - ans + 1 << '\n';
    return 0;
}
