#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string ch = "meow";
    int tt;
    cin >> tt;
    while (tt--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int i = 0;
        bool m = false, e = false, o = false, w = false;
        if(s[i] == 'm'){
            m = true;
            while (i < n and s[i] == 'm') i++;
        }
        if(i < n and s[i] == 'e'){
            e = true;
            while (i < n and s[i] == 'e')i++;
        }
        if(i < n and s[i] == 'o'){
            o = true;
            while (i < n and s[i] == 'o')i++;
        }
        if(i < n and s[i] == 'w'){
            w = true;
            while (i < n and s[i] == 'w')i++;
        }
        if(m and e and o and w and i == n)cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}
