#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
         string s;
         cin >> s;
         int n = (int) s.size(), l = 0, r = n;
         for(int i = 0; i < n; i++){
             if(s[i] == '1'){
                 l = i;
             }
             if(s[i] == '0' and r == n){
                 r = i + 1;
             }
         }
         cout << r - l << '\n';
    }
    return 0;
}
