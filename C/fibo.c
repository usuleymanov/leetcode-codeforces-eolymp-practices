#include <stdio.h>
int main(void){
    int i, n;
    scanf("%d", &n);
    long long a , b, t;
    a = 1;
    b = 1;
    
    for(i = 2; i <= n; i++){
          t = b;
          b = a + b;
          a = t;
          }
    printf("%lld\n", b);
    getch();
    return 0;
}
