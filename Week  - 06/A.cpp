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
        int a[n + 1], b[n + 1];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        for(int i = 1; i <= n; i++){
            cin >> b[i];
        }
        int mx = 0;
        for(int i = 1; i <= n; i++){
            if(b[i] < a[i]){
                mx = max(mx, a[i] - b[i]);
            }
        }
        for(int i = 1; i <= n; i++){
            a[i] = max(0, a[i] - mx);
        }
        bool f = true;
        for(int i = 1; i <= n; i++){
            f &= (a[i] == b[i]);
        }
        cout << (f ? "YES\n" : "NO\n");
    }
    return 0;
}
