#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    for(int i = 0; i * a <= c; i++){
        int need = c - (i * a);
        if(need % b == 0){
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}