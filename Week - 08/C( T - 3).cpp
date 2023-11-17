#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e5 + 9, inf = (int) 1e9 + 7;
int a[N];
struct node{
    int left = 0, left_ele = inf, right = 0, right_ele = inf, ans = 0;
}t[4 * N];

node merge(node x, node y){
    if(x.left_ele == inf)return y;
    if(y.left_ele == inf)return x;
    node ans{};
    ans.left_ele = x.left_ele;
    ans.left = x.left;
    if(x.left_ele == y.left_ele){
        ans.left += y.left;
    }
    ans.right_ele = y.right_ele;
    ans.right = y.right;
    if(x.right_ele == y.right_ele){
        ans.right += x.right;
    }
    ans.ans = max({x.ans, y.ans});
    if(x.right_ele == y.left_ele){
        ans.ans = max(ans.ans, x.right + y.left);
    }
    return ans;
}

void build(int n, int b, int e){
    if(b == e){
        t[n] = {1, a[b], 1, a[b], 1};
        return;
    }
    int m = (b + e) >> 1;
    build(2 * n, b, m);
    build(2 * n + 1, m + 1, e);
    t[n] = merge(t[2 * n], t[2 * n + 1]);
}

node query(int n, int b, int e, int l, int r){
    if(b > r or e < l)return {0, inf, 0, inf, 0};
    if(b >= l and e <= r)return t[n];
    int m = (b + e) >> 1;
    return merge(query(2 * n, b, m, l, r), query(2 * n + 1, m + 1, e, l, r));
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    while (cin >> n >> q and n){
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        for(int i = 1; i <= 4 * n; i++){
            t[i] = {0, inf, 0, inf, 0};
        }
        build(1, 1, n);
        while(q--){
            int l, r;
            cin >> l >> r;
            cout << query(1, 1, n, l, r).ans << '\n';
        }
    }
    return 0;
}
