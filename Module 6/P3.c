#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    while(scanf("%d", &n)){
        if(n == 1999){
            printf("Correct\n");
            break;
        }else printf("Wrong\n");
    }
    return 0;
}