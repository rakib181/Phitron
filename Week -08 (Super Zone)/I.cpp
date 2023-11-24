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
        bool possible = true;
        for(int i = 1; i <= n; i++){
            bool ok = true;
            for(int j = 1; j <= min(i, 22); j++){
                if(a[i] % (j + 1) != 0){
                    ok = false;
                }
            }
            if(ok) possible = false;
        }
        cout << (possible ? "YES\n" : "NO\n");
    }
    return 0;
}
