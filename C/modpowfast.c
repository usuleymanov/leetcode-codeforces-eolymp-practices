#include <stdio.h>
long long ModPow(long long a, long long b){
     if(b == 0) return 1;
     long long x = ModPow(a, b / 2);
     if( b % 2 == 0)    
         return (x*x)%10000007;
     return (((x*x)%10000007)*a)%10000007;
     }
int main(void){
    long long n, k;
    while(scanf("%lld %lld", &n, &k), n != 0){
              long long res = (2*ModPow(n - 1, k) + 2*ModPow(n-1,n-1) + ModPow(n, n) + ModPow(n, k))%10000007;
              printf("%lld\n", res);       
                      }
                      getch();
                      return 0;
}
