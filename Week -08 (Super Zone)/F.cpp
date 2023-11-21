#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n + 1];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        vector<pair<int, int>> pos;
        for(int i = 1; i <= n; i++){
            if(i + k <= n){
                pos.emplace_back(a[i],i);
                pos.emplace_back(a[i + k], i + k);
            }
            if(i - k >= 1){
                pos.emplace_back(a[i],i);
                pos.emplace_back(a[i - k], i - k);
            }
        }
        sort(pos.begin(), pos.end());
        pos.resize(unique(pos.begin(), pos.end()) - pos.begin());
        vector<bool> vis(n + 1, false);
        for(auto [x, y] : pos){
            vis[y] = true;
        }
        int b[n + 1];
        for(int i = 1, j = 0; i <= n; i++){
            if(vis[i]){
                b[i] = a[pos[j++].second];
            }else b[i] = a[i];
        }
        if(is_sorted(b + 1, b + n + 1))cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
