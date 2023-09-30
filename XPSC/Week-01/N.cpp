#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    for(int i = 0; i < (int) s.size(); i++){
        if(!(i & 1))cout << s[i];
    }
    return 0;
}