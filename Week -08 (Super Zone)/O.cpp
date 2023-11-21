#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(!(n & 1)){
            n -= 1;
            cout << n / 2 + 1 << ' ' << n / 2 << ' ' << 1 << '\n';
        }else{
            int x = n - 1;
            x >>= 1;
            if(x & 1){
                cout << x - 2 << ' ' << x + 2 << ' ' << 1 << '\n';
            }else{
                cout << x - 1 << ' ' << x + 1 << ' ' << 1 << '\n';
            }
        }
    }
    return 0;
}
