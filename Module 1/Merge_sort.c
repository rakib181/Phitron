#include<stdio.h>

void MERGE_SORT(int l, int r, int a[]){
    if(l < r){
        int m = (l + r) / 2;
        MERGE_SORT(l, m, a);
        MERGE_SORT(m + 1, r, a);
        int A[(r - l + 2)];
        int i = l, d = m, j = m + 1, k = 0;
        while(i <= d && j <= r){
            if(a[i] > a[j]){
                A[k++] = a[j++];
            }else A[k++] = a[i++];
        }
        while(i <= d){
            A[k++] = a[i++];
        }
        while(j <= r){
            A[k++] = a[j++];
        }
        k = 0;
        for(i = l; i <= r; i++){
            a[i] = A[k++];
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n + 1];
    for(int i = 1; i <= n; i++){
        scanf("%d", &a[i]);
    }
    MERGE_SORT(1, n, a);
    for(int i = 1; i <= n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}