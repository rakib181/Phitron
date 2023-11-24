#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int mod = 1e9 + 7;

int bin(int x, int y){
    int ans = 1;
    while(y){
        if(y & 1)ans = 1LL * ans * x % mod;
        x = 1LL * x * x % mod;
        y >>= 1;
    }
    return ans;
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int ans = 0, cnt = 0;
        while(k){
            if(k & 1){
                ans = 1LL * (1LL * ans + bin(n, cnt)) % mod;
            }
            cnt += 1;
            k >>= 1;
        }
        cout << ans << '\n';
    }
    return 0;
}
