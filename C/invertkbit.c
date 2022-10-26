#include <stdio.h>
int main(void){
    int a, k, t, res;
    scanf("%d %d", &a, &k);
    t = a >> k;
    if( t % 2 == 0){
       res = a | (1 << k);
       printf("%d\n", res); 
    }
    else {
         res = a & (~(1 << k));
         printf("%d\n" , res);
         }
    getch();
    return 0;
}
