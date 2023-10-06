#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool f(int n){
    int digits[10];
    memset(digits, 0, sizeof digits);
    while(n){
        if(digits[(n % 10)])return false;
        digits[(n % 10)] += 1;
        n /= 10;
    }
    return true;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    n += 1;
    while(!f(n)) n += 1;
    cout << n << '\n';
    return 0;
}
