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
    if((int) ans.size() == k){
        return;
    }
    for(int i = 0; i < n; i++){;
        if(!vis[i]){
            tmp += s[i];
            vis[i] = true;
            f(id + 1);
            if((int) ans.size() == k)return;
            tmp.pop_back();
            vis[i] = false;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, cs = 1;
    cin >> t;
    while(t--){
        cout << "Case " << cs++ << ":\n";
        cin >> n >> k;
        s.clear();
        ans.clear();
        tmp.clear();
        for(int i = 0; i < n; i++){
            s += char(i + 'A');
        }
        for(int i = 0; i < 26; i++){
            vis[i] = false;
        }
        f(0);
        for(int i = 0; i < (int) ans.size(); i++){
            cout << ans[i] << "\n";
        }
    }
    return 0;
}
