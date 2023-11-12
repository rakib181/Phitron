#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    map<char, int> mp;
    for(auto x : s){
        mp[x]++;
    }
    int cnt = 0; char c;
    for(auto x : mp){
        if(x.second & 1)cnt++, c = x.first;
    }
    if(cnt > 1)cout << "NO SOLUTION" << '\n';
    else{
        int n = (int) s.size();
        vector<char> ans(n);
        if(cnt == 1)ans[n / 2] = c, mp[c]--;  int i = 0, j = n - 1;
        for(auto &x : mp){
            while(x.second){
                ans[i] = x.first;
                ans[j] = x.first;
                i++, j--;
                x.second -= 2;
            }
        }
        for(int k = 0; k < n; k++){
            cout << ans[k];
        }
        cout << '\n';
    }
    return 0;
}
