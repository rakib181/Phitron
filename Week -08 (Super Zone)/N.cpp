#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        set<int> s;
        for(int i = 1; i <= n; i++){
            s.insert(i);
        }
        vector<int> need;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(s.find(x) != s.end()){
                s.erase(x);
            }else need.push_back(x);
        }
        bool ok = true;
        sort(need.rbegin(), need.rend());
        for(auto x : need){
            auto it = s.end();
            it--;
            int ow = *it;

            if(ow > ((x - 1) >> 1)){
                ok = false;
                break;
            }
            s.erase(it);
        }
        if(ok) cout << need.size() << '\n';
        else cout << "-1" << '\n';
    }
    return 0;
}
