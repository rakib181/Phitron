#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--){
        long long a, b, c;
        cin >> a >> b >> c;
        long long x1 = a, x2 = 0;
        if(b < c){
            x2 = c - b;
            x2 += c;
        }else if(b > c){
            x2 = b - c;
            x2 += c;
        }
        if(x1 == x2)cout << "3" << '\n';
        else if(x1 > x2){
            cout << "2" << '\n';
        }else cout << "1" << '\n';
    }
    return 0;
}
