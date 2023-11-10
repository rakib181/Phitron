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
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            a[i] ^= 1;
        }
        for(int i = 1; i <= n; i++){
            cout << a[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
