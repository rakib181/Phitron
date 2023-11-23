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
        int a[n + 1], prefix[n + 1];
        prefix[0] = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            prefix[i] = prefix[i - 1] + a[i];
        }
        set<int> se;
        for(int i = n; i >= 1; i--){
            int val = prefix[i];
            int j = i - 2;
            while(j >= 0 and val - prefix[j] <= n){
                se.insert(val - prefix[j]);
                j -= 1;
            }
        }
        int ans = 0;
        for(int i = 1; i <= n; i++){
            ans += (int) se.count(a[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}
