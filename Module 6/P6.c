#include <stdio.h>
#include <stdbool.h>

void WOW(int n){
    if(n <= 0)return;
    printf("%d ", n % 10);
    WOW(n / 10);
   
}

int main() {
    int tt;
    scanf("%d", &tt);
    while(tt--){
        int n;
        scanf("%d", &n);
        if(!n){
            printf("0\n");
            continue;
        }
        WOW(n);
        printf("\n");
    }
    return 0;
}