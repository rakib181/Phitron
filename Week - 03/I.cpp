#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--){
        int n;
        cin >> n;
        multiset<int> st;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            st.insert(x);
        }
        int res = 0;
        while (!st.empty()){
            res++;
            auto v = *st.begin();
            st.erase(st.begin());
            while (true) {
                auto nx = st.lower_bound(v + 1);
                if (nx == st.end() or *nx != v + 1)break;
                st.erase(nx);
                v++;
            }
        }
        cout << res << '\n';
    }
    return 0;
}
