#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 1];
        ll tot = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            tot += abs(a[i]);
        }
        int op = 0;
        for(int i = 1; i <= n; i++){
            if(a[i] < 0){
                op += 1;
                while(i <= n and a[i] <= 0){
                    i += 1;
                }
            }
        }
        cout << tot << ' ' << op << '\n';
    }
    return 0;
}
