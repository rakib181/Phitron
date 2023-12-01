#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--) {
        cin >> n;
        vector<int> cnt(30, 0);
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            for(int j = 29; j >= 0; j--){
                if((x >> j) & 1){
                    cnt[j] += 1;
                }
            }
        }
        vector<int> ans;
        for(int i = 1; i <= n; i++){
            bool found = true;
            for(int j = 0; j < 30; j++){
                if(cnt[j] % i){
                    found = false;
                }
            }
            if(found)ans.push_back(i);
        }
        for(auto x : ans){
            cout << x << ' ';
        }
        cout << '\n';
    }
    return 0;
}
