#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
       int n;
       cin >> n;
       string s;
       cin >> s;
       vector<int> cnt(26, 0);
       for(auto x : s){
           cnt[x - 'a'] += 1;
       }
       int odd = 0, vis = 0;
       for(int i = 0; i < 26; i++){
           vis += (cnt[i] == 0);
           odd += (cnt[i] & 1);
       }
       if(odd > 1)cout << "0\n";
       else if(odd == 0){
           cout << "1\n";
       }else{
           if(vis == 25){
               cout << "2\n";
           }else cout << "1\n";
       }
    }
    return 0;

}
