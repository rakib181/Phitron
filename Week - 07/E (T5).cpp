#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if(n & 1){
        n -= 3;
        cout << 1 + n / 2 << '\n';
        cout << "3 ";
        for(int i = 1; (i << 1) <= n; i++){
            cout << "2 ";
        }
        cout << '\n';
    }else{
        cout << n / 2 << '\n';
        for(int i = 1; (i << 1) <= n; i++){
            cout << "2 ";
        }
        cout << '\n';
    }
    return 0;
}
