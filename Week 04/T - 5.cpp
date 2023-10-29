#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = (1 << 15) + 1;

vector<int> pal;

bool is_palindrome(int n){
    string s = to_string(n);
    string r = s;
    reverse(r.begin(), r.end());
    return r == s;
}

void cal(){
    for(int i = 0; i < N; i++){
        if(is_palindrome(i)){
            pal.emplace_back(i);
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cal();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 1];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int cnt[N];
        memset(cnt, 0, sizeof cnt);
        ll ans = 0;
        for(int i = 1; i <= n; i++) {
            for (auto v: pal) {
                cnt[v ^ a[i]] += 1;
            }
            ans += cnt[a[i]];
        }
        cout << ans << '\n';
    }
    return 0;
}
