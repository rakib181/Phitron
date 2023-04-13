#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n <= 0){
        while(n != 2){
            printf("%d ", n++);
        }
    }else{
        int i = 1;
         while(i != n + 1){
            printf("%d ", i++);
        }
    }
    return 0;
}