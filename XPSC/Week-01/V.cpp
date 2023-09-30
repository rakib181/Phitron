#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        ans += (x % k == 0);
    }
    cout << ans << '\n';
    return 0;
}