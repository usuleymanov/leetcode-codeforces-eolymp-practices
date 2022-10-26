#include <stdio.h>
int main(void){
    long long a, b, m, c,i;
    scanf("%lld %lld %lld", &a, &b, &m);
    c = 1;
    for( i = 1; i <= b; i++)
     c = (c*a)% m;
    printf("%lld", c);
    getch();
    return 0; 
}
