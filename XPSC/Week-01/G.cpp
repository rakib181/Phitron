#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    int v = b / c * c;
    if(v >= a and v <= b)cout << v << '\n';
    else cout << "-1\n";
    return 0;
}