#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    int even = 0, odd = 0, pos = 0, neg = 0;
    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        if(x < 0) neg += 1, x *= -1;
        else if(x > 0) pos += 1;
        if(x & 1) odd += 1;
        else even += 1;
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, pos, neg);
    return 0;
}