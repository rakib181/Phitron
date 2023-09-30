#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x, y;
    cin >> x >> y;
    int cnt = 0;
    while(x <= y){
        cnt += 1;
        x += x;
    }
    cout << cnt << '\n';
    return 0;
}