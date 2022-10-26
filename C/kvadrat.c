#include <stdio.h>
#include <math.h>
int main(void){
    long long n, a , res, i;
    scanf("%lld %lld",&n, &a);
    res = 0;
    if(a==1)
    res = (n*(n+1)) / 2;
    else 
    for( i = 1; i < n+1; i++)
            res += i*pow(a, i);
    printf("%lld\n",res);
    getch();
    return 0;
    
}
