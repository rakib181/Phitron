#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
pair<int, int> a[N], b[N];

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        for(int i = 1; i <= n; i++){
            cin >> a[i].first;
            a[i].second = i;
        }
        for(int i = 1; i <= n; i++){
            cin >> b[i].first;
            b[i].second = i;
        }
        sort(a + 1, a + n + 1);
        sort(b + 1, b + n + 1);
        for(int i = 1; i <= n; i++){
           a[a[i].second].first = b[i].first;
        }
        for(int i = 1; i <= n; i++){
            cout << a[i].first << ' ';
        }
        cout << '\n';
    }
    return 0;
}
