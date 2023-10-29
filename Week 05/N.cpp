#include<bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--) {
        int n;
        cin >> n;
        vector<int> ar(n + 1);
        for (int i = 1; i <= n; i++)cin >> ar[i];

        int ans = n, sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += ar[i];
            int ss = 0, cnt = 0, f = i; bool found = true;
            for(int j = i + 1; j <= n; j++){
                ss += ar[j];
                cnt++;
                if(ss == sum){
                   f = max(f, cnt);
                   ss = 0;
                   cnt = 0;
                }else if(ss > sum){
                    found = false;
                    break;
                }
            }
            if(ss != 0)found = false;
            if(found)ans = min(ans, f);
        }
        cout << ans << '\n';
    }
    return 0;
}
