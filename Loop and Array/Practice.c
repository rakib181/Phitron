#include<stdio.h>

int main(){
    int n, last = -1;
    scanf("%d", &n);
    while(n){
        last = n % 10;
        n /= 10;
    }
    if(last & 1)printf("ODD\n");
    else printf("EVEN\n");
    return 0 ;
}