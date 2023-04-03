#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n < 0)printf("negative");
    else if(n > 0)printf("positive");
    else printf("zero");
    return 0;
}