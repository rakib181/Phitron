#include<bits/stdc++.h>
using namespace std;
using ll = long long;

string shortest_common_super_sequence(string &s, string &t) {
     int n = (int) s.size(), m = (int) t.size();
     int dp[n + 1][m + 1];
    memset(dp, 0, sizeof dp);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(s[i - 1] == t[j - 1]){
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }else{
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    string ans;
    int i = n, j = m;
    while(i and j){
        if(s[i - 1] == t[j - 1]){
            ans += s[i - 1];
            i -= 1, j -= 1;
        }else if(dp[i - 1][j] > dp[i][j - 1]){
            ans += s[i - 1];
            i -= 1;
        }else{
            ans += t[j - 1];
            j -= 1;
        }
    }
    while(i){
        ans += s[i - 1];
        i -= 1;
    }
    while(j){
        ans += t[j - 1];
        j -= 1;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    cout << shortest_common_super_sequence(s, t);
    return 0;
}
