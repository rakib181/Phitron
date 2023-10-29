#include<bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--) {
       int n, cnt = 0, ans = -1;
       cin >> n;
       for(int i = 1; i <= n; i++){
           int x;
           cin >> x;
           while (!(x & 1)){
               cnt++;
               x >>= 1;
           }
       }
       bool found = false;
       if(cnt >= n){
           found = true;
           ans = 0;
       }
       if(!found){
           priority_queue<int> pq;
           for(int i = 2; i <= n; i++){
               int j = i, tmp = 0;
               while(!(j & 1)){
                   tmp++;
                   j >>= 1;
               }
               pq.push(tmp);
           }
           ans = 0;
           while(!pq.empty()){
               if(cnt < n){
                   cnt += pq.top();
                   pq.pop();
                   ans++;
               }else{
                   break;
               }
           }
           if(cnt < n)ans = -1;
       }
        cout << ans << '\n';
    }
    return 0;
}
