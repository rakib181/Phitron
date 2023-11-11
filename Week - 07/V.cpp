#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MX = 1e6;

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int tt;
	cin >> tt;
	while (tt--) {
		ll x;
		cin >> x;
		ll l = 1, r = 1e7, ans = 1;
		while (l <= r) {
			ll m = (l + r) / 2;
			if (m * m <= (x - 1) and m <= MX) {
				ans = m;
				l = m + 1;
			} else r = m - 1;
		}
		ll cur = ans * ans; bool in = false;
		if ((x - cur) > MX) {
			cur = ans * (ans + 1);
			in = true;
		}
		if ((x - cur) > 0 and (x - cur) <= MX) {
			if (in)cout << ans  << ' ' << ans + 1 << ' ' << x - cur << '\n';
			else cout << ans << ' ' << ans << ' ' << x - cur << '\n';
		} else cout << "-1\n";

	}
	return 0;
}
