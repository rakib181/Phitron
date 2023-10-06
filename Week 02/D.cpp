#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 int solve(){
    int n;
    cin >> n;
    map<int, int> cnt;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        cnt[x] += 1;
    }
    int c = 0;
    priority_queue<pair<int, int>> pq;
    for(auto x : cnt){
        if(x.second >= 2) pq.emplace(x.second, x.first);
        else c += 1;
    }
    while((int) pq.size() >= 2){
        auto x = pq.top();
        pq.pop();
        auto y = pq.top();
        pq.pop();
        x.first -= 1;
        y.first -= 1;
        if(x.first >= 2)pq.push(x);
        else if(x.first == 1)c += 1;
        if(y.first >= 2)pq.push(y);
        else if(y.first == 1)c += 1;
    }
    if(!pq.empty() and pq.top().first >= 2 and pq.top().first & 1)c += 1;
     return c;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
       cout << solve() << '\n';
    }
    return 0;
}
