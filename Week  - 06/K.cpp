#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    if(a + b + (a * b) == 111)cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
