#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> prefix(n, 0);
        for(int i = 0; i < n; i++){
            prefix[i] = (s[i] == 'W');
            if(i) prefix[i] += prefix[i - 1];
        }
        auto get = [&](int l, int r){
            return prefix[r] - (l ? prefix[l - 1] : 0);
        };
        int ans = k + 1;
        for(int i = 0; i + k - 1 < n; i++){
            ans = min(ans, get(i, i + k - 1));
        }
        cout << ans << '\n';
    }
    return 0;
}
