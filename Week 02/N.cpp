#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    int c = 0;
    for(int i = 0; i < (int) s.size(); i++){
        c += (s[i] != t[i]);
    }
    cout << c << '\n';
    return 0;
}
