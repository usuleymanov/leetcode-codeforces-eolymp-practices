#include <stdio.h>
int main(void){
    int n, res;
    scanf("%d", &n);
    res = 1;
    while( n % 2 == 0){
           n /= 2;
           res *= 2;
           }
    printf("%d\n", res);
    getch();
    return 0;
}
