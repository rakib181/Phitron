#include <bits/stdc++.h>
using namespace std;

int string_to_num(string s){
    return (s[1]-'0')+(s[0]-'0')*10;
}

string num_to_st(int num){
    string z = "";
    while(num){
        z += '0'+num%10;
        num /= 10;
    }

    reverse(z.begin(), z.end());
    while(z.size()<2) z = "0"+z;

    return z;
}

bool check(string s){
    string r = s;
    reverse(s.begin(), s.end());
    return s == r;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int x;
        cin >> x;

        set<string> st;
        set<string> ans;

        while(true){
            string  z;
            int h = string_to_num(z + s[0] + s[1]);
            int m = string_to_num(z + s[3] + s[4]);

            m += x;
            h += m / 60;
            m %= 60;
            h %= 24;

            s = num_to_st(h);
            s += ":" + num_to_st(m);
            if(st.find(s) != st.end()) break;
            st.insert(s);

            if(check(s)) ans.insert(s);
        }

        cout << ans.size() << '\n';
    }

    return 0;
}
