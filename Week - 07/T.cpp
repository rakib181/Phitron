#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int d = n % 10;
        if(d < 5)n -= d;
        else n += (10 - d);
        cout << 100 - n << '\n';
    }
    return 0;

}
