#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        if(n - (n * .10) > m){
            cout << "DINING\n";
        }else if(n - (n * .10) < m){
            cout << "ONLINE\n";
        }else{
            cout << "EITHER\n";
        }
    }
    return 0;

}
