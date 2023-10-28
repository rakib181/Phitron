#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        int l = 1, r = n, ans = -1;
        while(l <= r){
            int m = (l + r) >> 1;
            if(a[m] < x){
                ans = m;
                l = m + 1;
            }else r = m - 1;
        }
        if(ans == -1)cout << "X ";
        else cout << a[ans] << ' ';
        l = 1, r = n, ans = -1;
        while(l <= r){
            int m = (l + r) >> 1;
            if(a[m] > x){
                ans = m;
                r = m - 1;
            }else l = m + 1;
        }
        if(ans == -1)cout << "X\n";
        else cout << a[ans] << '\n';
    }
    return 0;
}
