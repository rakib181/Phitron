#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
         int n, m;
         cin >> n >> m;
         vector<vector<int>> g(n + 1, vector<int> (m + 1, 0));
         for(int i = 1; i <= n; i++){
             for(int j = 1; j <= m; j++){
                 cin >> g[i][j];
             }
         }
         auto cal = [&](int x, int y){
             int pos_x = x - 1, pos_y = y - 1;
             int sum = g[x][y];
             while(pos_x > 0 and pos_y > 0){
                 sum += g[pos_x][pos_y];
                 pos_x -= 1, pos_y -= 1;
             }
             pos_x = x - 1, pos_y = y + 1;
             while(pos_x > 0 and pos_y <= m){
                 sum += g[pos_x][pos_y];
                 pos_x -= 1, pos_y += 1;
             }
             pos_x = x + 1, pos_y = y - 1;
             while(pos_x <= n and pos_y > 0){
                 sum += g[pos_x][pos_y];
                 pos_x += 1, pos_y -= 1;
             }
             pos_x = x + 1, pos_y = y + 1;
             while(pos_x <= n and pos_y <= m){
                 sum += g[pos_x][pos_y];
                 pos_x += 1, pos_y += 1;
             }
             return sum;
         };
         int ans = 0;
         for(int i = 1; i <= n; i++){
             for(int j = 1; j <= m; j++){
                 ans = max(ans, cal(i, j));
             }
         }
         cout << ans << '\n';
    }
    return 0;
}
