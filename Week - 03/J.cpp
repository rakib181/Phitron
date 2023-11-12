#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int inf = 1e9 + 7;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int k, n;
        cin >> k >> n;
        cout << "1 ";
        int x = 1;
        for(int i = 2; i <= k; i++){
            int v = min(n - (k - i), i + x - 1);
            cout << v << ' ';
            x = v;
        }
        cout << '\n';
    }
    return 0;
}
