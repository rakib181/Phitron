#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        ll x, y;
        cin >> x >> y;
        ll gc = __gcd(x, y);
        while(y > 1 and gc > 1){
            y /= gc;
            gc = __gcd(x, y);
        }
        if(y == 1)cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
