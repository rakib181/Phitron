#include<bits/stdc++.h>
using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--){
        int n, m, x, y, d;
        cin >> n >> m >> x >> y >> d;
        if((abs(y - 1) > d && abs(n - x) > d) || (abs(x - 1) > d && (m - y) > d)){
            cout << n + m - 2 << '\n';
        }else cout << "-1" << '\n';

    }
    return 0;
}
