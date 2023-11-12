#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int inf = 1e9 + 7;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int mn_odd = inf, mn_even = inf, odd = 0;
        for(int i = 1; i <= n; i++){
            int x;
            cin >> x;
            odd += (x & 1);
            if(x & 1){
                mn_odd = min(mn_odd, x);
            }else{
                mn_even = min(mn_even, x);
            }
        }
        if(!odd or mn_even - mn_odd > 0){
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }
    return 0;
}
