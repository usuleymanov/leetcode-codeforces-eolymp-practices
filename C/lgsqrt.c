#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, i;
    int a[1000005];
    a[0] = 1;
    for( i = 1; i <= 1000000; i++) 
    a[i] =(a[(int)(i-sqrt(i))] + a[(int)(log(i))] + a[(int)(i*sin(i)*sin(i))])%1000000;
    while(1){
    scanf("%d", &n);
    if( n == -1)
    break;
    else 
    printf("%d\n", a[n]);
    }
    getch();
    return 0;
}
