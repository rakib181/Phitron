#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    int mx = -1;
    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        if(mx < x)mx = x;
    }
    printf("%d", mx);
    return 0;
}