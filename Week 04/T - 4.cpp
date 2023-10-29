#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, b;
        cin >> n >> b;
        vector<int> a;
        for(int i = 1; i <= n; i++){
            int x;
            cin >> x;
            if((x & b) == b){
                a.emplace_back(x);
            }
        }
        int ans = -1;
        for(auto x : a){
            ans &= x;
        }
        ans == b ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
