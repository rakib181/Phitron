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
      int n, k;
      cin >> n >> k;
      map<int, vector<int> > mp;
      for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        mp[x].push_back(i);
      }
      while(k--){
        int a, b;
        cin >> a >> b;
        if (!mp[a].size() || !mp[b].size()){
          cout << "NO" << '\n';
        }
        else if(mp[a][0] < mp[b][mp[b].size() - 1]){
          cout << "YES" << '\n';
        }else{
          cout << "NO" << '\n';
        } 
      }
    }
    cerr<<1.0 * (clock()-start)/CLOCKS_PER_SEC<<endl;
    return 0;
}
