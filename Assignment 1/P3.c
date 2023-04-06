#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);
    int ans = 0;
    while(n){
        ans += (n % 10);
        n /= 10;
    }
    if(ans % 3 == 0){
        printf("YES");
    }else printf("NO");
    return 0;
}
