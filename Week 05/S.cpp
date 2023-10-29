#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int> ar(n);
        for(int i = 0; i < n; i++){
            cin >> ar[i];
        }
        int idx = 0;
        set<int> se;
        for(int i = n - 1; i >= 0; i--){
            se.insert(ar[i]); idx++;
            if(idx > se.size()){
                break;
            }
        }
        cout << (n - se.size()) << '\n';
    }
    return 0;
}
