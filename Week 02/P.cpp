#include<bits/stdc++.h>
using namespace std;

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
       int n;
       cin >> n;
       string s;
       cin >> s;
       map<char, int> mp;
       for(int i = 0; i < n; i++){
        mp[s[i]]++;
       }
        if(mp.size() > 5 || mp.size() < 5)cout << "NO" << '\n';
        else{
           if(mp['T'] == 1 && mp['i'] == 1 && mp['m'] == 1 && mp['u'] == 1 && mp['r'] == 1){
            cout << "YES" << '\n';
           }else cout << "NO" << '\n';
        }
      }
      cerr<<1.0 * (clock()-start)/CLOCKS_PER_SEC<<endl;
      return 0;
}
