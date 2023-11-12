#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--){
       int n, k;
       cin >> n >> k;
       string s;
       cin >> s;
       map<char, int> mp1, mp2;
       for(auto x : s){
           if(x >= 'a' and x <= 'z')mp1[x]++;
       }
        for(auto x : s){
            if(x >= 'A' and x <= 'Z')mp2[x]++;
        }
        int ans = 0;
        vector<int> cnt (26, 0);
        for(auto x: mp1){
            cnt[x.first- 'a'] = x.second;
        }
        for(auto x : mp2){
            cnt[tolower(x.first) - 'a'] = abs(cnt[tolower(x.first) - 'a'] - x.second);
        }
        for(auto x: mp1){
            ans += min(x.second, mp2[toupper(x.first)]);
        }
        for(int i = 0; i < 26; i++){
            if(k > 0 and cnt[i] / 2 <= k){
                ans += (cnt[i] / 2);
                k -= (cnt[i] / 2);
            }else if(k > 0){
                if(cnt[i] / 2 > k){
                    ans += k;
                    k = 0;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
