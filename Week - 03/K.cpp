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
        int a, b, c, d;
        cin >> a >> b >> d >> c;
        vector<int> cyc({a, b, c, d, a, b, c, d});
        auto check = [&](int x, int y, int w, int z){
            return x < y and z < w and x < z and y < w;
        };
        bool f = false;
        for(int i = 0; i + 3 < (int) cyc.size(); i++){
            if(check(cyc[i], cyc[i + 1], cyc[i + 2], cyc[i + 3])){
                cout << "YES\n";
                f = true;
                break;
            }
        }
        if(!f) cout << "NO\n";
    }
    return 0;
}
