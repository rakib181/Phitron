#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e5 + 9;
int n, q, a[N];
ll t[4 * N];

void build(int node, int b, int e){
    if(b == e){
        t[node] = a[b];
        return;
    }
    int m = (b + e) >> 1;
    build(2 * node, b, m);
    build(2 * node + 1, m + 1, e);
    t[node] = t[2 * node] + t[2 * node + 1];
}

void upd(int node, int b, int e, int i, ll val){
    if(b > i or e < i)return;
    if(b == e){
        t[node] += val;
        return;
    }
    int m = (b + e) >> 1;
    upd(2 * node, b, m, i, val);
    upd(2 * node + 1, m + 1, e, i, val);
    t[node] = t[2 * node] + t[2 * node + 1];
}

ll query(int node, int b, int e, int l, int r){
    if(b > r or e < l)return 0;
    if(b >= l and e <= r)return t[node];
    int m = (b + e) >> 1;
    return query(2 * node, b, m, l, r) + query(2 * node + 1, m + 1, e, l, r);
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt, cs = 1;
    cin >> tt;
    while(tt--) {
        cout << "Case " << cs++ << ":\n";
        cin >> n >> q;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        build(1, 1, n);
        while (q--) {
            int type;
            cin >> type;
            if (type == 1) {
                int i;
                cin >> i;
                i += 1;
                ll val = query(1, 1, n, i, i);
                cout << val << '\n';
                upd(1, 1, n, i, -val);
            } else if (type == 2) {
                int i, val;
                cin >> i >> val;
                i += 1;
                upd(1, 1, n, i, val);
            } else {
                int l, r;
                cin >> l >> r;
                l += 1, r += 1;
                cout << query(1, 1, n, l, r) << '\n';
            }
        }
        for(int i = 0; i <= 4 * n; i++){
            t[i] = 0;
        }
    }
    return 0;
}
