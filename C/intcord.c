#include <stdio.h>
long long gcd (long long a, long long b)
{
    long long c;
    if ( b == 0 )
        return a;
    else
        while ( b != 0 )
        {
            c = b;
            b = a % b;
            a = c;
        }
        return a;
}
int main(void){
    long long cx1, cx2, cy1, cy2, tx, ty;
    scanf("%lld %lld %lld %lld", &cx1, &cy1, &cx2, &cy2);
    tx = cx2 - cx1;
    ty = cy2 - cy1;
    if(tx < 0)
    tx = (-1)*tx;
    if(ty < 0)
    ty = (-1)*ty;
    printf("%lld\n", gcd(tx , ty)+ 1);
    getch();
    return 0;
}
