#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     int tt;
     cin >> tt;
    while (tt--){
       int n;
       cin >> n;
       if(n == 3)cout << "-1" << '\n';
       else{
           if(n & 1){
               for(int i = n; i >= n / 2 + 2; i--){
                   cout << i << ' ';
               }
               for(int i = 1; i <= n / 2 + 1; i++){
                   cout << i << ' ';
               }
               cout << '\n';
           }else{
               for(int i = 1; i <= n; i += 2){
                   cout << i + 1 << ' ' << i << ' ';
               }
               cout << '\n';
           }
       }
    }
     return 0;
}
