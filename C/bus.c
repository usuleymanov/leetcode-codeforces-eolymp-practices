#include <stdio.h>
int main(void){
    int t , n, i, res;
    scanf("%d", &t);
    for( i = 0; i < t; i++){
         scanf("%d", &n);
         res = (1 << n) - 1;
         printf("%d\n", res);
         }
    getch();
    return 0;
}
