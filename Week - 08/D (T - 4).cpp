#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e6 + 9;

string s;
struct node{
    int open{}, close{}, ans{};
    node() = default;
    node(int open, int close, int ans){
        this -> open = open;
        this -> close = close;
        this -> ans = ans;
    }
}t[4 * N];

node combine(node x, node y){
    node ans{};
    int count = min(x.open, y.close);
    ans.open = x.open + y.open - count;
    ans.close = x.close + y.close - count;
    ans.ans = x.ans + y.ans + (count << 1);
    return ans;
}

void build(int n, int b, int e){
    if(b == e){
        if(s[b] == '('){
            t[n] = node(1, 0, 0);
        }else{
            t[n] = node(0, 1, 0);
        }
        return;
    }
    int m = (b + e) >> 1;
    build(2 * n, b, m);
    build(2 * n + 1, m + 1, e);
    t[n] = combine(t[2 * n], t[2 * n + 1]);
}

node query(int n, int b, int e, int l, int r){
    if(b > r or e < l)return {0, 0, 0};
    if(b >= l and e <= r){
        return t[n];
    }
    int m = (b + e) >> 1;
    return combine(query(2 * n, b, m, l, r), query(2 * n + 1, m + 1, e, l, r));
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s;
    s = '$' + s;
    int n = (int) s.size();
    int q;
    cin >> q;
    build(1, 1, n);
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << query(1, 1, n, l, r).ans << '\n';
    }
    return 0;
}
