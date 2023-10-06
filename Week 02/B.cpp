#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

int solve(){
    int n;
    cin >> n;
    int cnt[n + 1];
    memset(cnt, 0, sizeof cnt);
    int ans = -1;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        cnt[x] += 1;
        if(cnt[x] >= 3)ans = x;
    }
    return ans;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
       cout << solve() << '\n';
    }
    return 0;
}
