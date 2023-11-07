#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        x = max(0, x - a);
        y = max(0, y - b);
        if(x){
            if(x >= c){
                x -= c;
                c = 0;
            }else{
                c -= x;
                x = 0;
            }
        }
        if(y){
            if(y >= c){
                y -= c;
                c = 0;
            }else{
                c -= y;
                y = 0;
            }
        }
        cout << (!(x | y) ? "YES\n" : "NO\n");
    }
    return 0;
}
