#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 105, mod = 1e9 + 7;
int f[N];

void cal(){
    f[0] = 1;
    for(int i = 1; i < N; i++){
        f[i] = 1LL * f[i - 1] * i % mod;
    }
}

int bin(int x, int y){
    int ans = 1;
    while(y){
        if(y & 1) ans = 1LL * ans * x % mod;
        x = 1LL * x * x % mod;
        y >>= 1;
    }
    return ans;
}

int nCr(int n, int r){
    int val = f[n];
    int d = 1LL * f[n - r] * f[r] % mod;
    return 1LL * val * bin(d, mod - 2) % mod;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cal();
    int t;
    cin >> t;
    while(t--){
         int n, k;
         cin >> n >> k;
         if(n >= k){
             cout << f[k] << '\n';
         }else{
             cout << 1LL * nCr(k, n) * f[n] % mod << '\n';
         }
    }
    return 0;
}
