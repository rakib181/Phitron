#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int cnt[26], n = (int) s.size();
    memset(cnt, 0, sizeof cnt);
    for(int i = 0; i < n; i++){
        cnt[s[i] - 'a'] += 1;
    }
    for(int i = 0; i < 26; i++){
        if(!cnt[i]){
            cout << char(i + 'a');
            return 0;
        }
    }
    cout << "None\n";
    return 0;
}