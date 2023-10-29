#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--){
        string s, key = "abcdefghijklmnopqrstuvwxyz";
        int n;
        cin >> n;
        cin >> s;
        string ans ;
        int i = 0;
        for(; i < n;){
            if(i + 2 < n && s[i + 2] == '0'){
                if(i + 3 < n && s[i + 3] == '0'){
                    ans += key[(s[i] - '0') - 1];
                    i++;
                    continue;
                }
                int d = 10, num = 0, k = i;
                while(d){
                     num += (s[k] - '0') * d;
                      d /= 10; k++;
                }
                if(num >= 10) ans += key[num - 1], i += 3;
                else ans += key[s[i] - '0' - 1], i++;
            }else{
               ans += key[(s[i] - '0') - 1];
                i++; 
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
