#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int cnt = 0;
        cnt += (a == 0);
        cnt += (b == 0);
        cnt += (c == 0);
        if (cnt >= 2)cout << "Water filling time\n";
        else cout << "Not Now\n";
    }
    return 0;
}
