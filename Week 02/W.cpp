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
         vector<string> a(n);
         for(int i = 0; i < n; i++){
             cin >> a[i];
         }
         int ans = INT_MAX;
         auto f = [&](string x, string y){
             int cnt = 0;
             for(int i = 0; i < m; i++){
                 cnt += abs((x[i] - 'a') - (y[i] - 'a'));
             }
             return cnt;
         };
         for(int i = 0; i < n; i++){
             for(int j = i + 1; j < n; j++){
                 ans = min(ans, f(a[i], a[j]));
             }
         }
         cout << ans << '\n';
    }
    return 0;
}
