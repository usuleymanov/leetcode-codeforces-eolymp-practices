#include <stdio.h>
int main(void){
    long long a, k, t, res;
    scanf("%lld %lld", &a, &k);
    t = ~(1 << k);
    res = a & t;
    printf("%d\n", res);
    getch();
    return 0;
}
