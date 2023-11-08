#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        string s, p;
        cin >> s >> p;
        int c = 0;
        for(auto x : p){
            c += (x == 'a');
        }
        if(p == "a"){
            cout << "1\n";
        }else if(!c){
            int n = (int) s.size();
            cout << (1LL << n) << '\n';
        }else cout << "-1\n";
    }
    return 0;
}
