#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        ll power = 0;
        priority_queue<int> pq;
        for(int i = 1; i <= n; i++){
            int x;
            cin >> x;
            if(!x){
               if(!pq.empty()){
                   power += pq.top();
                   pq.pop();
               }
            }else{
                pq.push(x);
            }
        }
        cout << power << '\n';
    }
    return 0;
}
