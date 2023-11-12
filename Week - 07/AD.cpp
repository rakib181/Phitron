#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
       int n;
       cin >> n;
       int a[n + 1], cnt[100 + 1];
        memset(cnt, 0, sizeof cnt);
       for(int i = 1; i <= n; i++){
           cin >> a[i];
           cnt[a[i]] += 1;
       }
       int b[n + 1];
       for(int i = 1; i <= n; i++){
           b[i] = 1;
       }
       int val_x = -1, val_y = -1, c = 0;
       for(int i = 1; i <= 100; i++){
           if(cnt[i] >= 2 and c < 2){
               if(val_x == -1){
                   val_x = i;
                   c += 1;
                   continue;
               }
               if(val_y == -1){
                   val_y = i;
               }
               c += 1;
           }
           if(c == 2)break;
       }
       if(val_x == -1 or val_y == -1){
           cout << "-1\n";
           continue;
       }
       int save_x = 0, save_y = 0;
       for(int i = 1; i <= n; i++){
           if(a[i] == val_x){
               save_x = i;
               b[i] = 2;
           }
           if(a[i] == val_y){
               save_y = i;
           }
       }
       b[save_x] = 3;
       b[save_y] = 3;
       for(int i = 1; i <= n; i++){
           cout << b[i] << ' ';
       }
       cout << '\n';
    }
    return 0;
}
