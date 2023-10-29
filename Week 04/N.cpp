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
        int a[n + 1];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        int i = 1, j = n;
        int ans = 0;
        while(i <= j){
            ans += (a[j] - a[i]);
            i += 1, j -= 1;
        }
        cout << ans << '\n';
    }
    return 0;
}
