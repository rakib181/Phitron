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
        int a[n + 1];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int b[n + 1];
        for(int i = 1; i <= n; i++){
            cin >> b[i];
        }
        sort(a + 1, a + n + 1);
        sort(b + 1, b + n + 1);
        for(int i = 1; i <= n; i++){
            if(a[i] != b[i])a[i] += 1;
        }
        bool ok = true;
        for(int i = 1; i <= n; i++){
            ok &= (a[i] == b[i]);
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
