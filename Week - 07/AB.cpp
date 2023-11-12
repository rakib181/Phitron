#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
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
        sort(a + 1, a + n + 1);
        auto ok = [&](int *d){
            for(int i = 2; i < n; i++){
                if(d[i] > d[i - 1] and d[i] > d[i + 1]){

                }else if(d[i] < d[i - 1] and d[i] < d[i + 1]){

                }else return false;
            }
            return true;
        };
        int b[n + 1], c[n + 1];
        {
            int j = 1;
            for(int i = 1; i <= n; i += 2){
                b[i] = a[j++];
            }
            for(int i = 2; i <= n; i += 2){
                b[i] = a[j++];
            }
        }
        {
            int j = 1;
            for(int i = 2; i <= n; i += 2){
                c[i] = a[j++];
            }
            for(int i = 1; i <= n; i += 2){
                c[i] = a[j++];
            }
        }
        if(ok(b)){
            for(int i = 1; i <= n; i++){
                cout << b[i] << ' ';
            }
            cout << '\n';
        }else if(ok(c)){
            for(int i = 1; i <= n; i++){
                cout << c[i] << ' ';
            }
            cout << '\n';
        }else cout << "-1\n";
    }
    return 0;
}
