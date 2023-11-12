#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int inf = 1e9 + 7;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<string> se;
        for(int i = 0; i + 1 < n; i++){
            string v = s.substr(i, 2);
            se.insert(v);
        }
        cout << (int) se.size() << '\n';
    }
    return 0;
}
