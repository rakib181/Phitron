#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int alice = 0, bob = 0;
        bool server_alice = true;
        bool server_bob = false;
        for(int i = 0; i < n; i++){
            if(server_alice){
                if(s[i] == 'A')alice += 1;
                else {
                    server_alice = false;
                    server_bob = true;
                }
            }else{
                if(s[i] == 'B'){
                    bob += 1;
                }else{
                    server_alice = true;
                    server_bob = false;
                }
            }
        }
        cout << alice << ' ' << bob << '\n';
    }
    return 0;
}
