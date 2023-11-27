#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const double inf = 2e18;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        bool f = false;
        for(int i = 2; i <= 60; i++){
            int d = pow(n, 1.0 / i);
            if(d == 1)continue;
            ll res = 0, p = 1;
            for(int x = 0; x <= i; x++){
                 if(x) p *= d;
                 res += p;
            }
            if(res == n){
                f = true;
                break;
            }
        }
        cout << (f ? "YES\n" : "NO\n");
    }
    return 0;
}
