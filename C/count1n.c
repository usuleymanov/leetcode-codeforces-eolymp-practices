#include <stdio.h>
long long counting1(long long b){
     long long c = 0;
     while( b > 0){
            if( b % 2 == 1) c++;
            b = b / 2;
            }
     return c;
     }
long long count( long long a){
     if( a == 0) return 0;
     if( a % 2 == 1) return( a / 2 + 1 + 2*count(a / 2));
     long long t = counting1(a / 2);
     return( a / 2 + t + 2*count( (a - 1) / 2));
     }

int main(void){
    long long n, m, res;;
    scanf("%lld %lld", &n, &m);
    res = count(m) - count(n - 1);
    printf("%lld\n", res);
    getch();
    return 0;
}
