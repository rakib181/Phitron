#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    if(c != 'z')printf("%c", c + 1);
    else printf("%c", 'a');
    return 0;
}