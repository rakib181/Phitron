#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool compare(long long x, long long y){
    return x > y;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n; ll curVal = 0;
        cin >> n;
        string s;
        cin >> s;
        vector<int> cal(n);
        for(int i = 0; i < n; i++){
            if(i <= n / 2 && s[i] == 'L'){
                cal[i] = (n - i - 1) - i;
            }else if(i >= n / 2 && s[i] == 'R'){
                cal[i] = i - (n - i - 1);
            }
            if(s[i] == 'L')curVal += i;
            else curVal += (n - i - 1);
        }
        sort(cal.begin(), cal.end(), compare);
        for(int i = 0; i < n; i++){
            if(cal[i] > 0) curVal += cal[i];
            cout << curVal << ' ';
        }
        cout << '\n';
    }
    return 0;
}
