#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 9;
int n, a[N];

bool good(int x){
    int cnt = 1, t = a[1] + x + x;
    for(int i = 2; i <= n; i++){
        if(a[i] > t){
            cnt += 1;
            t = a[i] + x + x;
        }
    }
    return cnt <= 3;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--){
       cin >> n;
       for(int i = 1; i <= n; i++){
           cin >> a[i];
       }
       sort(a + 1, a + n + 1);
       int l = 0, r = 2e9 + 5, ans = -1;
       while(l <= r){
           int m = (l + r) >> 1;
           if(good(m)){
               ans = m;
               r = m - 1;
           }else l = m + 1;
       }
       cout << ans << '\n';
    }
    return 0;
}
