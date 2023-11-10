#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        auto solve = [](int n){
            if(n & 1 and n % 9 == 0){
                return "Bob";
            }
            if(!(n & 1) and n % 7 == 0){
                return "Alice";
            }
            return "Charlie";
        };
        cout << solve(n) << '\n';
    }
    return 0;
}
