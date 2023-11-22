#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cnt[30];
        memset(cnt, 0, sizeof cnt);
        for(int i = 1; i <= n; i++){
            int x;
            cin >> x;
            for(int b = 0; b < 30; b++){
                if((x >> b) & 1){
                    cnt[b] += 1;
                }
            }
        }
        for(int i = 1; i <= n; i++){
            bool possible = true;
            for(int b = 0; b < 30; b++){
                possible &= (cnt[b] % i == 0);
            }
            if(possible)cout << i << ' ';
        }
        cout << '\n';
    }
    return 0;
}
