#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n); bool f = false;
    for(int i = 2; i <= n; i += 2){
        f = true;
        printf("%d\n", i);
    }
    if(!f)printf("-1\n");
    return 0;
}