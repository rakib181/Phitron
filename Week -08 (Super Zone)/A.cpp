#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 9;
int n, a[N], cnt[N];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
       cin >> n;
       for(int i = 1; i <= n; i++){
           cnt[i] = 0;
       }
       map<int, int> cp;
       for(int i = 1; i <= n; i++){
           cin >> a[i];
           cp[a[i]] += 1;
       }
       for(auto x : cp){
           for(int j = x.first; j <= n; j += x.first){
               cnt[j] += x.second;
           }
       }
       int ans = 0;
       for(int i = 1; i <= n; i++){
           ans = max(ans, cnt[i]);
       }
       cout << ans << '\n';
    }
    return 0;
}
