#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i + 2 < n; i++){
        if(s.substr(i, 3) == "ABC")cnt += 1;
    }
    cout << cnt << '\n';
    return 0;
}