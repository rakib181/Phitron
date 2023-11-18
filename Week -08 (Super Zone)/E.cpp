#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int inf = 1e9 + 7;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char c; cin >> c;
        string s; cin >> s;
        s = "$" + s;
        bool fine = true;
        for(int i = 1; i <= n; i++){
            fine &= (s[i] == c);
        }
        if(fine){
            cout << "0\n";
            continue;
        }
        int pos = -1;
        for(int i = 1; i <= n; i++){
            if(s[i] == c){
                bool ok = true;
                for(int j = i + i; j <= n; j += i){
                    ok &= (s[j] == c);
                }
                if(ok){
                    pos = i;
                    break;
                }
            }
        }
        if(pos != -1){
            cout << "1\n" << pos << '\n';
            continue;
        }
        cout << "2\n" << n - 1 << ' ' << n << '\n';
    }
    return 0;
}
