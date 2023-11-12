#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--){
        int n, r, s;
        cin >> n >> r >> s;
        vector<int> a;
        for(int i = 1; i <= n - 1; i++){
            a.emplace_back(1);
        }
        int mx = r - s;
        a.emplace_back(mx);
        s -= (n - 1);
        int idx = 0;
        while(s > 0){
            if(s >= mx - 1){
                s -= (mx - 1);
                a[idx] += (mx - 1);
                idx += 1;
            }else{
                a[idx] += s;
                break;
            }
        }
        for(auto x : a){
            cout << x << ' ';
        }
        cout << '\n';
    }
    return 0;
}
