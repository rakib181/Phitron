#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int k;
    cin >> k;
    ll ans = 0;
    for(int i = 1; i <= k; i++){
        for(int j = 1; j <= k; j++){
            for(int x = 1; x <= k; x++){
                ans += __gcd(i, __gcd(j, x));
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
