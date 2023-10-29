#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int k = n;
        vector<int> ar; int idx = 8, ans = 0;
        int ok[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        while(n > 0){
            if(n - ok[idx] > 0) {
                ar.push_back(ok[idx]);
                ans += ok[idx];
                n -= ok[idx];
                idx--;
            }else{
                break;
            }
        }
        if(n != 0)ar.push_back(k - ans);
        reverse(ar.begin(), ar.end());
        for(int i = 0; i < ar.size(); i++){
            cout << ar[i];
        }
        cout << '\n';
    }
    return 0;
}
