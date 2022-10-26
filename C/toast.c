#include <stdio.h>
#include <math.h>
int main(void){
    int n, k, res;
    scanf("%d %d", &n, &k);
    if( n == 0 )
    printf("0\n");
    else if( n <= k)
    printf("4\n");
    else {
    res = 2 * ceil(2.0*n / k);
    printf("%d\n", res); }
    getch();
    return 0;
}
