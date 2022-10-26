#include <stdio.h>
int main(void){
    int n, k, t,res;
    scanf("%d %d", &n, &k);
    t = (~0)<<k;
    res = n & t;
    printf("%d\n", res);
    scanf("%d", &n);
    return 0;
}
