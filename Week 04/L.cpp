#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    stack<string> st;
    map<string, bool> f;
    for(int i = 1; i <= n; i++){
        string s;
        cin >> s;
            st.push(s);
    }
    while (!st.empty()){
        if(f.count(st.top())){
            st.pop();
        }else {
            string s = st.top();
            st.pop();
            f[s] = true;
            int sz = (int) s.size();
            cout << s[sz - 2] << s[sz - 1];
        }
    }
    return 0;
}
