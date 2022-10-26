#include <stdio.h>
int main(void){
    long long n, res;
    scanf("%lld", &n);
    res = 2 * (n / 3);
    if( n % 3 == 2)
    res++;
    printf("%lld\n", res);
    getch();
    return 0;
}
