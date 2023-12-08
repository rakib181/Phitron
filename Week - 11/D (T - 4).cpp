#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n, k;
vector<string> ans;
string s, tmp;
vector<bool> vis(26);

void f(int id){
    if(id == n){
        ans.emplace_back(tmp);
        return;
    }
    if((int) ans.size() == k + 1){
        return;
    }
    for(int i = 0; i < n; i++){;
        if(!vis[i]){
            tmp += s[i];
            vis[i] = true;
            f(id + 1);
            if((int) ans.size() == k + 1)return;
            tmp.pop_back();
            vis[i] = false;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        cin >> k;
        n = (int) s.size();
        ans.clear();
        tmp.clear();
        for(int i = 0; i < 26; i++){
            vis[i] = false;
        }
        f(0);
        cout << ans[k] << '\n';
    }
    return 0;
}
