#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n < 50){
            int need = (50 - n) % 2;
            if(need < 0)need += 2;
            if(need)cout << (50 - n) / 2 + 3 << '\n';
            else cout << (50 - n) / 2 << '\n';
        }else if(n > 50){
            int need = (n - 50) % 3;
            if(need < 0)need += 3;
            if(need == 2){
                cout << (n - 50) / 3 + 4 << '\n';
            }else if(need == 1){
                cout << (n - 50) / 3 + 2 << '\n';
            }else cout << (n - 50) / 3 << '\n';
        }else cout << "0\n";
    }
    return 0;

}
