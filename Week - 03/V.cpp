#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
         int m, s;
         cin >> m >> s;
         set<int> a;
         for(int i = 1; i <= m; i++){
             int x;
             cin >> x;
             a.insert(x);
         }
         int i = 1;
         while(s > 0){
             if(a.count(i)){
                 i += 1;
             }else{
                 a.insert(i);
                 s -= i;
             }
         }
         bool check = true;
         i = 1;
         for(auto x : a){
             if(x == i){
                 i += 1;
             }else{
                 check = false;
                 break;
             }
         }
         if(s == 0 and check)cout << "YES\n";
         else cout << "NO\n";
    }
    return 0;
}
