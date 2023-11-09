#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<int> lower_double, lower_single, upper_double, upper_single;
    for(int i = 1; i <= 10; i++){
        lower_double.insert(i);
    }
    for(int i = 11; i <= 15; i++){
        lower_single.insert(i);
    }
    for(int i = 16; i <= 25; i++){
        upper_double.insert(i);
    }
    int t;
    cin >> t;
    while(t--) {
        int val;
        cin >> val;
        if(lower_double.find(val) != lower_double.end()){
            cout << "Lower Double\n";
            continue;
        }
        if(lower_single.find(val) != lower_single.end()){
            cout << "Lower Single\n";
            continue;
        }
        if(upper_double.find(val) != upper_double.end()){
            cout << "Upper Double\n";
            continue;
        }
        cout << "Upper Single\n";
    }
    return 0;
}
