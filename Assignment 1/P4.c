#include<stdio.h>

int main(){
    int n, it = 21;
    scanf("%d", &n);
    while(it <= n){
        printf("%d \n", it);
        it = it + 21;
    }
    return 0;
}