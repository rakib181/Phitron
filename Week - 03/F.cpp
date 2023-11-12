#include <bits/stdc++.h>
using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s("314159265358979323846264338327");
    int tt;
    cin >> tt;
    while (tt--){
        string ss;
        cin >> ss;
        int cnt = 0;
        for(int i = 0; i < (int) ss.size(); i++){
            if(ss[i] == s[i])cnt++;
            else break;
        }
        cout << cnt << '\n';
    }
    return 0;
}
