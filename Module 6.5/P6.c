#include <stdio.h>

long long int min(long long int a, long long int b, long long int c){
    if(a <= b && a <= c)return a;
    if(b <= a && b <= c)return b;
    return c;
}

int main() {
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    long long int ans = 0;
    long long int mn = min(a, b, c);
    ans += mn;
    a -= mn, b -= mn, c -= mn;
    mn = min((long long int)1e18 + 1, a / 2, c);
    ans += mn;
    a -= 2 * mn;
    c -= mn;
    mn = min(a / 2, b, c);
    ans += mn;
    printf("%lld", ans);
    return 0;
}