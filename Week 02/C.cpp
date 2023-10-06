#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 ll solve(){
    int n;
    cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    return accumulate(a + 1, a + n + 1, 0LL) - *min_element(a + 1, a + n + 1) * n;
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
