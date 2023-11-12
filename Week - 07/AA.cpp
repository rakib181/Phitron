#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> a;
        for(int i = 1; i <= n + m; i++){
            int x;
            cin >> x;
            a.emplace_back(x);
        }
        sort(a.begin(),  a.end() - 1);
        reverse(a.begin(), a.end());
        ll ans = 0;
        for(int i = 0; i < n; i++){
            ans += a[i];
        }
        cout << ans << '\n';
    }
    return 0;
}
