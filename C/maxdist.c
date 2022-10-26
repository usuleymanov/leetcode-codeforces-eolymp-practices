#include <stdio.h>
int main(void){
    long long a, k, t,l, res;
    scanf("%lld", &a);
    k = 0;
    l = 0;
    while( a > 0){
           if( a % 2 == 1) k++;
           a /= 2;
           l++;
           }
    t = (1 << l) - 1;
    t = (t >> (l - k)) << (l - k);
    res = t - (1 << k) + 1;
    printf("%d\n", res);
    getch();
    return 0;
}
