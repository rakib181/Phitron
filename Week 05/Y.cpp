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
      string s;  set<char> st;
      cin >> s;
      int cnt = 0, days = 0;
      if(s.size() <= 3){
        cout << "1" << '\n';
      }else{
        for(int i = 0; i < s.size(); i++){
           st.insert(s[i]);
           if(st.size() > 3){
            days++;
            st.clear();
            st.insert(s[i]);
           }
        }
        if(st.size() != 0) days++;
        cout << days << '\n';
      }
    }
    cerr<<1.0 * (clock()-start)/CLOCKS_PER_SEC<<endl;
    return 0;
}
