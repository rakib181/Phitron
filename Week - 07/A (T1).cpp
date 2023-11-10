#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll LCM(int a, int b) {
    return (1LL * a * b) / __gcd(a, b);
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    int red = n / a, blue = n / b, both = n / LCM(a, b);
    cout << max(1LL * red * p + 1LL * (blue - both) * q, 1LL * blue * q + 1LL * (red - both) * p) << '\n';
    return 0;
}
