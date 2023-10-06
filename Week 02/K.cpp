#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    ll prefix[n + 1];
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(i)prefix[i] = prefix[i - 1] + x;
        else prefix[i] = x;
    }
    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - (l ? prefix[l - 1] : 0) << '\n';
    }
    return 0;
}
