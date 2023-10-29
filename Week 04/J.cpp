#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     int tt;
     cin >> tt;
    while (tt--){
        string a, b;
        cin >> a >> b;
        int x = std::count(a.begin(), a.end(),'X'), y = std::count(b.begin(), b.end(), 'X');
        if(a == b)cout << "=" << '\n';
        else if(x >= y and a[a.size() - 1] == 'L')cout << ">" << '\n';
        else if(y >= x and b[b.size() - 1] == 'L')cout << "<" << '\n';
        else if(a == "M" and b[b.size() - 1] != 'L')cout << ">" << '\n';
        else if(a == "M" and b[b.size() - 1] == 'L') cout << "<" << '\n';
        else if(x >= y and a[a.size() - 1] == 'S')cout << "<" << '\n';
        else cout << ">" << '\n';
    }
     return 0;
}
