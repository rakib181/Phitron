#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll l, r;
    cin >> l >> r;
    cout << "YES\n";
    for(ll i = l; i <= r; i += 2){
        cout << i << ' ' << i + 1 << '\n';
    }
    return 0;
}
