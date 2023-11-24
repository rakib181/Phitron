#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n + 1];
        vector<int> neg, pos;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            if(a[i] > 0)pos.emplace_back(a[i]);
            else neg.emplace_back(-1 * a[i]);
        }
        sort(pos.rbegin(), pos.rend());
        sort(neg.rbegin(), neg.rend());
        int sz = (int) pos.size();
        int lst = 0; ll ans = 0;
        while(lst < sz){
            ans += (pos[lst] << 1);
            lst += k;
        }
        sz = (int) neg.size();
        lst = 0;
        while(lst < sz){
            ans += (neg[lst] << 1);
            lst += k;
        }
        int val = 0;
        if(!pos.empty()){
            val = pos[0];
        }
        if(!neg.empty()){
            val = max(val, neg[0]);
        }
        ans -= val;
        cout << ans << '\n';
    }
    return 0;
}
