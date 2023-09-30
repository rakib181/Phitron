#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    while((int) s.size() < 4){
        s = "0" + s;
    }
    cout << s << '\n';
    return 0;
}