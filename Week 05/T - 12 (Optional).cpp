#include <bits/stdc++.h>
using namespace std;
const double eps = 1e-7;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        double ax, ay, bx, by, px, py;
        cin >> px >> py >> ax >> ay >> bx >> by;
        auto d = [&](double x1, double y1, double x2, double y2){
            double X = abs(x1 - x2);
            X *= X;
            double Y = abs(y1 - y2);
            Y *= Y;
            return sqrt(X + Y);
        };
        auto f = [&](double dist){
            if(d(0, 0, ax, ay) <= dist and d(px, py, ax, ay) <= dist)return true;
            if(d(0, 0, bx, by) <= dist and d(px, py, bx, by) <= dist)return true;
            if(d(ax, ay, bx, by) > 2 * dist)return false;
            if((d(0, 0, ax, ay) <= dist or d(0, 0, bx, by) <= dist) and (d(px, py, ax, ay) <= dist or d(px, py, bx, by) <= dist))return true;
            return false;
        };
        double l = 0, r = 3e3 + 9;
        while((r - l) > eps){
            double m = (l + r) / 2;
            if(f(m))r = m;
            else l = m;
        }
        cout << fixed << setprecision(10) << r << '\n';
    }
    return 0;
}
