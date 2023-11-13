#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
   ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int tt;
    cin >> tt;
    while(tt--){
      int a, b;
      cin >> a >> b;
      if (a <= b) swap(a, b);
      cout <<(a ^ b) << '\n';
    }
    return 0;
}
