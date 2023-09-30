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
        map<string, int> mp;
        vector<string> p1(n), p2(n), p3(n);
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < n; j++){
                if(i == 0){
                    cin >> p1[j];
                    mp[p1[j]]++;
                }
                else if(i == 1){
                    cin >> p2[j];
                    mp[p2[j]]++;
                }
                else {
                    cin >> p3[j];
                    mp[p3[j]]++;
                }
            }
        }
        int ans1 = 0, ans2 = 0, ans3 = 0;
        for(int i = 0; i < n; i++){
            if(mp[p1[i]] == 1) ans1 += 3;
            else if(mp[p1[i]] == 2) ans1 += 1;
        }
        for(int i = 0; i < n; i++){
            if(mp[p2[i]] == 1) ans2 += 3;
            else if(mp[p2[i]] == 2) ans2 += 1;
        }
        for(int i = 0; i < n; i++){
            if(mp[p3[i]] == 1) ans3 += 3;
            else if(mp[p3[i]] == 2) ans3 += 1;
        }
        cout << ans1 << ' ' << ans2 << ' ' << ans3 << '\n';
    }
    return 0;
}