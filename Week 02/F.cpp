#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int k, s;
    cin >> k >> s; int ans = 0;
    for(int x = 0; x <= k; x++){
        for(int y = 0; y <= k; y++){
            int n = s - (x + y);
            if(n >= 0 and n <= k){
                ans += 1;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
