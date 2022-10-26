#include <stdio.h>
int main(void){
    int n, a, max, min, i;
    max = -1000;
    min = 1000;
    scanf("%d", &n);
    for( i = 0; i < n; i++){
         scanf("%d", &a);
         if( a < min)
         min = a;
         if(a > max)
         max = a;
         }
         printf("%d\n", max + min);
    getch();
    return 0;       
}
