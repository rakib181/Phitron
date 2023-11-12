#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
       int l, r, x;
       cin >> l >> r >> x;
       int a, b;
       cin >> a >> b;
       if(a == b)cout << "0" << '\n';
       else if(abs(a - b) >= x)cout << "1" << '\n';
       else if(a - l >= x and b - l >= x or r - a >= x and r - b >= x)cout << "2" << '\n';
       else if(a - l >= x and r - l >= x and r - b >= x or r - a >= x and r - l >= x and b - l >= x)cout << "3" << '\n';
       else cout << "-1" << '\n';
    }
    return 0;
}
