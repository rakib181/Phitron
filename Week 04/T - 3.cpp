#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    int a[m + 2];
    for(int i = 1; i <= m + 1; i++){
        cin >> a[i];
    }
    int cnt = 0;
    for(int i = 1; i <= m; i++){
        int x = a[i] ^ a[m + 1];
        int c = 0;
        for(int b = 0; b <= 30; b++){
            c += ((x >> b) & 1);
        }
        cnt += (c <= k);
    }
    cout << cnt << '\n';
    return 0;
}
