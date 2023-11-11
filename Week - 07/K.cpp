#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
       int x, y;
       cin >> x >> y;
       if(y * 2 >= x)cout << "YES\n";
       else cout << "NO\n";
    }
    return 0;

}
