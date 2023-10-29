#include<bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--) {
      int n, q, cnt1 = 0, cnt2 = 0, sum = 0;
      cin >> n >> q;
      vector<int> ar(n);
      for(int i = 0; i < n; i++){
          cin >> ar[i];
          if(ar[i] & 1)cnt2++;
          else cnt1++;
          sum += ar[i];
      }
      while(q--){
          int x, y;
          cin >> x >> y;
          if(!x){
              if(y & 1){
                  sum += cnt1 * y;
                  cnt2 += cnt1;
                  cnt1 = 0;
              }else{
                  sum += cnt1 * y;
              }
          }else{
              if(y & 1){
                  sum += cnt2 * y;
                  cnt1 += cnt2;
                  cnt2 = 0;
              }else{
                  sum += cnt2 * y;
              }
          }
          cout << sum << '\n';
      }

    }
    return 0;
}
