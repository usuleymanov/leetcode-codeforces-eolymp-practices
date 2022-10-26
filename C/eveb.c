#include <stdio.h>
int main(void){
    long long n,t,d,res,count;
    res = 1;
    count = 0;
    scanf("%lld", &n);
    while(n != 0 ){
            t = n / 10;
            d = n - 10*t;
            n = n / 10;
            if( d % 2 == 0){
            res *= d;
            count++;
            }
            }
            if( count < 2 )
            printf("-1\n");
            else
            printf("%lld\n", res);
            getch();
            return 0;
}
