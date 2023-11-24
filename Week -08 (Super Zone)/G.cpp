#include<bits/stdc++.h>
using namespace std;
using ll = long long;


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool possible = false; int ans = n + 1;
        for(char c = 'a'; c <= 'z'; c++){
            int l = 0, r = n - 1, del = 0; bool ok = true;
            while(l < r){
                if(s[l] != s[r]){
                    if(s[l] == c)l += 1, del += 1;
                    else if(s[r] == c)r -= 1, del += 1;
                    else {
                        ok = false;
                        break;
                    }
                }else{
                    l += 1, r -= 1;
                }
            }
            if(ok){
                possible = true;
                ans = min(ans, del);
            }
        }
        if(!possible)ans = -1;
        cout << ans << '\n';
    }
    return 0;
}
