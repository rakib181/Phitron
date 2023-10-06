#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--){
       vector<vector<char>> chess(9, vector<char> (9));
       for(int i = 1; i <= 8; i++){
           for(int j = 1; j <= 8; j++){
               cin >> chess[i][j];
           }
       }
       auto valid = [&](int x, int y){
           return chess[x - 1][y -1] == '#' and chess[x - 1][y + 1] == '#' and chess[x + 1][y - 1] == '#' and chess[x + 1][y + 1] == '#';
       };
       int x, y; bool found = false;
       for(int i = 1; i <= 8; i++){
           for(int j = 1; j <= 8; j++){
               if(chess[i][j] == '#'){
                   if(valid(i, j)){
                       x = i, y = j;
                       found = true;
                       break;
                   }
               }
           }
           if(found) break;
       }
       cout << x << ' ' << y << '\n';
    }
    return 0;
}
