#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 9;
int n, a[N];

bool good(int x){
    vector<bool> used(n + 1);
    for(int i = 1; i <= x; i++){
        used[i] = used[n - i + 1] = true;
    }
    vector<int> v;
    for(int i = 1; i <= n; i++){
        if(!used[a[i]])v.emplace_back(a[i]);
    }
    for(int i = 1; i < (int) v.size(); i++){
        if(v[i] < v[i - 1])return false;
    }
    return true;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int l = 0, r = (n + 1) / 2, tot = 0;
        while(l <= r){
            int m = (l + r) >> 1;
            if(good(m)){
                tot = m;
                r = m - 1;
            }else l = m + 1;
        }
        cout << tot << '\n';
    }
    return 0;
}
