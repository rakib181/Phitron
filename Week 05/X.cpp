#include<bits/stdc++.h>
using namespace std;

int digit(int n){
  string s = to_string(n);
  return s.size() - 1;
}

int32_t main(){
   ios_base::sync_with_stdio(0);
    cin.tie(0); 
    #ifndef ONLINE_JUDGE 
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout); 
    #endif
    auto start=clock();
    int tt;
    cin >> tt;
    while(tt--){
      long long n; cin >> n;
      int cnt = digit(n);
      cout << (int)abs((double)pow(10, cnt) - n) << '\n';
    }
    cerr<<1.0 * (clock()-start)/CLOCKS_PER_SEC<<endl;
    return 0;
}
