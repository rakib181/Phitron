#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x * 4 <= 1000)cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;

}
