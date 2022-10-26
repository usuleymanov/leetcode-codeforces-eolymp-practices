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
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n", gcd(a,b));
    getch();
    return 0;
}
