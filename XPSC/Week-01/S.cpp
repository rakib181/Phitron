#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, cs = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        ll add = 0;
        for(int i = 1; i <= n; i++){
            int x;
            cin >> x;
            if(x > i + add){
                add += (x - (i + add));
            }
        }
        cout << add << '\n';
    }
    return 0;
}