#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
       int n;
       cin >> n;
       int end = 0;
       int s[n + 1], f[n + 1];
       for(int i = 1; i <= n; i++)cin >> s[i];
       for(int i = 1; i <= n; i++)cin >> f[i];
       for(int i = 1; i <= n; i++){
           end = max(end, s[i]);
           cout << f[i] - end << ' ';
           end = max(end, f[i]);
       }
       cout << '\n';
    }
    return 0;
}
