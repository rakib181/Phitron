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
         if(s[0] >= s[1]){
             cout << 25 * (s[0] - 'a') + (s[1] - 'a') + 1 << '\n';
         }else{
             cout << 25 * (s[0] - 'a') + (s[1] - 'a') << '\n';
         }
    }
    return 0;
}
