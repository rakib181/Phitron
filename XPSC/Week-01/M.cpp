#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt[26];
        memset(cnt, 0, sizeof cnt);
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(cnt[s[i] - 'A'] == 0)ans += 2;
            else ans += 1;
            cnt[s[i] - 'A'] += 1;
        }
        cout << ans << '\n';
    }
    return 0;
}