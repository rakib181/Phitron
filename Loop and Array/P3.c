#include<stdio.h>

int main(){
    char c;
    scanf("%c", &c);
    if(c >= 'a' && c <= 'z')printf("%c", (char) (c - 32));
    else printf("%c", (char) (c + 32));
    return 0 ;
}