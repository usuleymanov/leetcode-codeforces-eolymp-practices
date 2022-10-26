#include <stdio.h>
long long n,res;
int main(void){
   while( scanf("%lld",&n) == 1){
          res = 0;
    while( n > 0){
               res += ((n + 1)/ 2)*((n + 1)/2);
               n = n / 2;
           }
    printf("%lld\n", res);
}
    getch();
    return 0;
}
