#include<bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--) {
      int n;
      cin >> n;
      vector<int> ar(n); vector<char> ans(n);
      for(int i = 0; i < n; i++){
          cin >> ar[i];
      }
      string s;
      cin >> s;
      for(int i = 0; i < n; i++){
          int rem = ar[i];
          for(int j = 0; j < n; j++){
              if(ar[j]== rem)ans[j] = s[i];
          }
      }
      bool ok = true;
      for(int i = 0; i < n; i++){
          if(s[i] != ans[i]){
              ok = false;
              break;
          }
      }
      if(ok)cout << "YES" << '\n';
      else cout << "NO" << '\n';
    }
    return 0;
}
