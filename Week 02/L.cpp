#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        int n;
        cin >> n;
        vector<long long> ar(n + 1), br(n + 1), prefix_sum(n + 2, 0), prefix_sum1(n + 2, 0);
        for(int i = 1; i <= n; i++){
            cin >> ar[i];
            br[i] = ar[i];
        }
        sort(br.begin(), br.end());
        for(int i = 1; i <= n; i++){
            prefix_sum[i] = prefix_sum[i - 1] + ar[i];
        }
        for(int i = 1; i <= n; i++){
            prefix_sum1[i] = prefix_sum1[i - 1] + br[i];
        }
        int q;
        cin >> q;
        while(q--){
            int x;
            cin >> x;
            if(x == 1){
                int l, r;
                cin >> l >> r;
                cout << prefix_sum[r] - prefix_sum[l - 1] << '\n';
            }else{
                int l, r;
                cin >> l >> r;
                cout << prefix_sum1[r] - prefix_sum1[l - 1] << '\n';
            }
        }
    return 0;
}
