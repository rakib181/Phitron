#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        if(__builtin_popcountll(n) == 1)cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
