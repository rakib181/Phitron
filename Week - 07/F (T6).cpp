#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; int k;
    cin >> n >> k;
    vector<ll> divs;
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0){
            divs.emplace_back(i);
            if(n / i != i){
                divs.emplace_back(n / i);
            }
        }
    }
    sort(divs.begin(), divs.end());
    int sz = (int) divs.size();
    if(k <= sz){
        cout << divs[k - 1] << '\n';
    }else cout << "-1\n";
    return 0;
}
