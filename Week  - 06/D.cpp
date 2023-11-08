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
        int a[n + 1];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int op = 0; bool possible = true;
        for(int i = n - 1; i >= 1; i--){
            if(a[i] >= a[i + 1]){
                while(a[i] >= a[i + 1]){
                    if(a[i] == 0 and a[i + 1] == 0){
                        possible = false;
                        break;
                    }
                    a[i] >>= 1;
                    op += 1;
                }
            }
        }
        if(!possible){
            cout << "-1\n";
            continue;
        }
        cout << op << '\n';
    }
    return 0;
}
