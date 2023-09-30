#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int s, t;
    cin >> s >> t; int ans = 0;
    for(int a = 0; a <= 100; a++){
        for(int b = 0; b <= 100; b++){
            for(int c = 0; c <= 100; c++){
                if(a + b + c <= s and a * b * c <= t) ans += 1;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}