#include<bits/stdc++.h>
using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int> ar(n); map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> ar[i];
            mp[32 - __builtin_clz(ar[i])]++;
        }
        long long ans = 0;
        for(int i = 0; i < n; i++){
            if(--mp[32 - __builtin_clz(ar[i])]){
                ans += mp[32 - __builtin_clz(ar[i])];
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
