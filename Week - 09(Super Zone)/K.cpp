#include <bits/stdc++.h>
using namespace std;
using ll = long long ;

signed main(){
    int tt;
    cin >> tt;
    while (tt--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a > 0){
            int x = b - min(b, c), y = c - min(b, c);
            if(a < x + y + d) cout << a + 2 * min(b, c) + (a + 1) << '\n';
            else cout << a + 2 * min(b, c) + x + y + d << '\n';
        }else cout << "1" << '\n';
    }
    return 0;
}
