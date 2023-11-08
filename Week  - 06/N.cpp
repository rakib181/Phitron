#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, k, l;
        cin >> n >> k >> l;
        vector<int> songs[6];
        for(int i = 1; i <= n; i++){
            int m, li;
            cin >> m >> li;
            songs[li].emplace_back(m);
        }
        for(int i = 0; i < 6; i++){
            sort(songs[i].rbegin(), songs[i].rend());
        }
        int ans = 0;
        if((int) songs[l].size() < k){
            cout << "-1\n";
            continue;
        }
        for(int i = 0; i < k; i++){
            ans += songs[l][i];
        }
        cout << ans << '\n';
    }
    return 0;
}
