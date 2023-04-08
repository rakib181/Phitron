#include<stdio.h>

int main(){
    char c;
    scanf("%c", &c);
    if(c >= 'a' && c <= 'z'){
        printf("ALPHA\nIS SMALL");
    }else if(c >= 'A' && c <= 'Z'){
        printf("ALPHA\nIS CAPITAL");
    }else printf("IS DIGIT");
    return 0 ;
}