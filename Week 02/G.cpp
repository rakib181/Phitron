#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int sum(int n){
    if(n <= 0)return n;
    return (n % 10) + sum(n / 10);
}

int f(int n){
    if(n < 10)return 0;
    return 1 + f(sum(n));
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    if((int) s.size() < 2){
        cout << "0\n";
        return 0;
    }
    int n = 0;
    for(auto x : s){
        n += (x - '0');
    }
    cout << f(n) + 1 << '\n';
    return 0;
}
