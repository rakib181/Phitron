#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, cntG = 0, cntB = 0;
        cin >> n;
        vector<vector<char>> ar(2, vector<char> (n));
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < n; j++){
                cin >> ar[i][j];
            }
        }
        bool ok = true;
        for(int i = 0; i < n; i++){
            if((ar[0][i] == 'R' and (ar[1][i] == 'B' or ar[1][i] == 'G')) or (ar[1][i] == 'R' and (ar[0][i] == 'B' or ar[0][i] == 'G'))){
                ok = false;
                break;
            }
        }
        if(ok)cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}
