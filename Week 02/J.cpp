#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    for(int i = 1; i <= n; i++){
        int v;
        cin >> v;
        if(v == x)continue;
        cout << v << ' ';
    }
    return 0;
}
