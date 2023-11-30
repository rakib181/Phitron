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
        int ans = -1;
        for(int i = 1; i <= n; i++){
            int x;
            cin >> x;
            ans &= x;
        }
        cout << ans << '\n';
    }
    return 0;
}
