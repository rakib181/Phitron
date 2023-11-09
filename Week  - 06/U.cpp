#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		stack<char> st;
		bool winner = false;
		for (auto x : s) {
			if (st.empty())st.push(x);
			else if (st.top() != x) {
				st.pop();
				winner ^= 1;
			} else {
				st.push(x);
			}
		}
		winner ? cout << "Zlatan\n" : cout << "Ramos\n";
	}
	return 0;
}
