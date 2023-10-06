#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int ans = 0;
    while(n){
        ans += 1;
        n /= k;
    }
    cout << ans << '\n';
    return 0;
}
