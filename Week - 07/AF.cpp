#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[(n * (n - 1)) / 2 + 1];
        for(int i = 1; i <= (n * (n - 1)) / 2; i++){
            cin >> a[i];
        }
        sort(a + 1, a + ((n * (n - 1)) / 2) + 1);
        vector<int> ans;
        int i = 1, j = n - 1;
        while(j){
            ans.emplace_back(a[i]);
            i += j;
            j -= 1;
        }
        while ((int) ans.size() < n){
            ans.emplace_back(a[(n * (n - 1)) / 2]);
        }
        for(auto x : ans){
            cout << x << ' ';
        }
        cout << '\n';
    }
    return 0;
}
