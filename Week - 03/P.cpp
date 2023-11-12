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
        string s;
        cin >> s;
        map<char, int> mp;
        for(int i = 0; i < n; i++){
            mp[s[i]]++;
        }
        if(mp.size() > 5 || mp.size() < 5)cout << "NO" << '\n';
        else{
            if(mp['T'] == 1 && mp['i'] == 1 && mp['m'] == 1 && mp['u'] == 1 && mp['r'] == 1){
                cout << "YES" << '\n';
            }else cout << "NO" << '\n';
        }
    }
    return 0;
}
