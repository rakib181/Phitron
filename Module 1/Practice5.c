#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
     if(n >= 10000){
        printf("Gucci beg\n");
        if(n > 20000)printf("Gucci belt");
     }else if(n >= 5000)printf("Levis beg");
     else printf("Something");
    return 0;
}