#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--){
      string s;
      cin >> s;
      int cost = 0, n = s.size();
      char ch = s[0], ch1 = s[n - 1];
      map<char, vector<int>> mp;
      for(int i = 0; i < n; i++){
        mp[s[i]].push_back(i + 1);
      }
      vector<int> ans;
      ans.push_back(1);
      if(ch > ch1){
        sort(s.rbegin(), s.rend());
        s.resize(unique(s.begin(), s.end()) - s.begin());
        for(int i = 0; i < s.size(); i++){
            if(s[i] <= ch && s[i] >= ch1){
                cost += abs((s[i] - 'a' + 1) - (ch - 'a' + 1));
                    for(auto x : mp[s[i]]){
                      if(x != 1 && x != n) ans.push_back(x);
                    }
                    ch = s[i];
            }
        }
      }else{
         sort(s.begin(), s.end());
        s.resize(unique(s.begin(), s.end()) - s.begin());
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= ch && s[i] <= ch1){
                cost += abs((s[i] - 'a' + 1) - (ch - 'a' + 1));
                    for(auto x : mp[s[i]]){
                    if(x != 1 && x != n) ans.push_back(x);
                    }
                    ch = s[i];
            }
        }
      }
      ans.push_back(n);
      cout << cost << ' ' << ans.size() << '\n';
      for(auto x : ans){
        cout << x << ' ';
      }
      cout << '\n';
    }
    return 0;
}
