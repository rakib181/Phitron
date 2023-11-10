#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6 + 9;
int spf[N];

void cal(){
    for(int i = 1; i < N; i++)spf[i] = i;
    for(int i = 2; i < N; i++){
        if(spf[i] == i){
            for(int j = i; j < N; j += i){
                spf[j] = min(spf[j], i);
            }
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cal();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int, int> cnt;
        for(int i = 1; i <= n; i++){
            int x;
            cin >> x;
            while(x > 1){
                int p = spf[x];
                while (x % p == 0){
                    cnt[p] += 1;
                    x /= p;
                }
            }
        }
        bool f = true;  
        for(auto [x, y]: cnt){
            f &= (y % n == 0);
        }
        cout << (f ? "YES\n" : "NO\n");
    }
    return 0;
}
