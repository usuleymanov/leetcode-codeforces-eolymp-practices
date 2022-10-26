#include <stdio.h>
int main(void){
    int a, k, t;
    scanf("%d %d", &a, &k);
    t = a >> k;
    if( t % 2 == 0){
       printf("0\n"); 
    }
    else {
         printf("1\n");
         }
    getch();
    return 0;
}
