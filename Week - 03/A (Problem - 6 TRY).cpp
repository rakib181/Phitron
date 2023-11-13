#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 signed main(){
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     int tt;
     cin >> tt;
     while (tt--){
         int n;
         cin >> n;
         int a[n + 1];
         vector<int> bits(9, 0); int x = 0;
         for(int i = 1; i <= n; i++){
             cin >> a[i];
             for(int j = 8; j >= 0; j--){
                 if((a[i] >> j) & 1){
                     bits[j] += 1;
                 }
             }
         }
         for(int i = 0; i < 9; i++){
            if(bits[i] & 1){
                x |= (1 << i);
            }
         }
         int ans = 0;
         for(int i = 1; i <= n; i++){
             ans ^= (a[i] ^ x);
         }
         if(ans != 0) x = -1;
         cout << x << '\n';
     }
     return 0;
}
