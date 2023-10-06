#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 3005;
int d[N];

void cal(){
    for(int i = 2; i < N; i++){
        if(d[i] == 0) {
            for (int j = i; j < N; j += i) {
                d[j] += 1;
            }
        }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cal();
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        cnt += (d[i] == 2);
    }
    cout << cnt << '\n';
    return 0;
}
