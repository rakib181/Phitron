#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
         string s;
         cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
         cout << (s == "yes" ?  "YES\n" : "NO\n");
    }
    return 0;
}
