#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 25;
int n, a[N];

int f(int i, int s1, int s2){
    if(i == n + 1){
        return abs(s1 - s2);
    }
    int x = f(i + 1, s1 + a[i], s2);
    int y = f(i + 1, s1, s2 + a[i]);
    return min(x, y);
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    cout << f(1, 0, 0) << '\n';
    return 0;
}
