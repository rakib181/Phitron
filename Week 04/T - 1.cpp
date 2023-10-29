#include<bits/stdc++.h>
using namespace std;

signed main(){
   ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
      cin >> a[i];
    }
     bool ok=false;
    for(int mask = 0; mask < (1 << n); mask ++){
      int ans=0;
      for(int i = 0; i < n; i++){
        if(mask & (1 << i)) ans += a[i];
        else ans -= a[i];
      }
      if(ans % 360 == 0){
        ok=true;
        break;
    }
  }
  if(ok)cout << "YES" << '\n';
  else cout << "NO" <<'\n';
    return 0;
}
