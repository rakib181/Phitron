#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1005;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n + 1], cnt = 0, ans = 0;
    for(int i = 1; i <= n; i++)cin >> a[i];
    for(int i = 2; i < N; i++){
        int c = 0;
        for(int j = 1; j <= n; j++){
            if(a[j] % i == 0){
                c += 1;
            }
        }
        if(c > cnt){
            cnt = c;
            ans = i;
        }
    }
    cout << ans << '\n';
    return 0;
}
