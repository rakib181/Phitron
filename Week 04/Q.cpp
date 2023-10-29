#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 9;
vector<int> g[N];
int leaf[N];

void dfs(int u, int p){
    int c = 0;
    for(auto  x: g[u]){
        if(x != p){
            dfs(x, u);
            c += 1;
            leaf[u] += leaf[x];
        }
    }
    if(c == 0){
        leaf[u] = 1;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--){
       int n;
       cin >> n;
       for(int i = 1; i <= n; i++){
           g[i].clear();
           leaf[i] = 0;
       }
       for(int i = 1; i <= n - 1; i++){
           int u, v;
           cin >> u >> v;
           g[u].emplace_back(v);
           g[v].emplace_back(u);
       }
       dfs(1, 0);
       int q;
       cin >> q;
       while(q--){
           int x, y;
           cin >> x >> y;
           cout << 1LL * leaf[x] * leaf[y] << '\n';
       }
    }
    return 0;
}
