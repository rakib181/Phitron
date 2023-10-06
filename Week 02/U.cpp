#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int cnt = 0;
        cnt += (a < b);
        cnt += (a < c);
        cnt += (a < d);
        cout << cnt << '\n';
    }
    return 0;
}
