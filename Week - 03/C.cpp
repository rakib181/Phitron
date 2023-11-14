#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> s(n);
        map<string, bool> mp;
        for(int i = 0; i < n; i++){
            cin >> s[i];
            mp[s[i]] = true;
        }
        for(int i = 0; i < n; i++){
            bool found = false;
            for(int j = 0; j < (int) s[i].size(); j++){
                 string prefix = s[i].substr(0, j), suffix = s[i].substr(j);
                 if(mp.count(prefix) and mp.count(suffix)){
                     cout << "1";
                     found = true;
                     break;
                 }
            }
            if(!found)cout << "0";
        }
        cout << '\n';
    }
    return 0;
}
