#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
       string s;
       cin >> s;
       int p; cin >> p;
       int cur = 0;
       for(auto x : s){
           cur += (x - 'a') + 1;
       }
       if(cur <= p){
           cout << s << '\n';
           continue;
       }
       vector<pair<char, int>> a;
       for(int i = 0; i < (int) s.size(); i++){
           a.emplace_back(s[i], i);
       }
       sort(a.rbegin(), a.rend());
       vector<bool> vis((int) s.size(), false);
       for(int i = 0; i < (int) a.size(); i++){
           if(cur <= p){
               break;
           }
           cur -= ((a[i].first - 'a') + 1);
           vis[a[i].second] = true;
       }
       for(int i = 0; i < (int) s.size(); i++){
           if(!vis[i]){
               cout << s[i];
           }
       }
       cout << '\n';
    }
    return 0;
}
