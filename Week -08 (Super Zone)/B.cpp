#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    int n;
    cin >> n;
    for(int i = 1; i <= (int) (2 * 1e5) / 4; i++){
        s += "aabb";
    }
    cout << s.substr(0, n) << '\n';
    return 0;
}
