#include<bits/stdc++.h>
using namespace std;

int get_len(string s){
    return s.size();
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int> ar(n), br(n);
        priority_queue<int> a, b;
        for(int i = 0; i < n; i++){
            cin >> ar[i];
            a.push(ar[i]);
        }
        for(int i = 0; i < n; i++){
            cin >> br[i];
            b.push(br[i]);
        }
        int ans = 0;
        while(!a.empty()){
            int x = a.top(); a.pop();
            int y = b.top(); b.pop();

            if(x > y){
                ans++;
                a.push(get_len(to_string(x)));
                b.push(y);
            }
            if(x < y){
                ans++;
                a.push(x);
                b.push(get_len(to_string(y)));
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
