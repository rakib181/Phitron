#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
       ll n, k;
       cin >> n >> k;
       if(n < 2LL * k){
           cout << "NO\n";
       }else{
           ll odd = (n + 1) / 2; odd -= k;
           if(odd >= 0 and !(odd & 1)){
               cout << "YES\n";
           }else cout << "NO\n";
       }
    }
    return 0;
}
