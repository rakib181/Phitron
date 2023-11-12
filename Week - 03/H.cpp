#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int inf = 1e9 + 7;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> g[n + 1];
        int ind[n + 1];
        memset(ind, 0, sizeof ind);
        for(int i = 1; i <= n; i++){
            int last = -1;
            for(int j = 0; j < n - 1; j++){
                int x;
                cin >> x;
               if(last != -1) {
                   g[last].emplace_back(x);
                   ind[x] += 1;
               }
               last = x;
            }
        }
        queue<int> q;
        for(int i = 1; i <= n; i++){
            if(!ind[i])q.push(i);
        }
        while(!q.empty()){
            int node = q.front();
            q.pop();
            cout << node << ' ';
            for(auto v : g[node]){
                if(--ind[v] == 0){
                    q.push(v);
                }
            }
        }
        cout << '\n';
    }
    return 0;
}
