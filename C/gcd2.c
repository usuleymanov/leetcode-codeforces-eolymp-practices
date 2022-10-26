#include <stdio.h>
int gcd (int a,int b)
{
    int c;
    if ( b == 0 )
        return a;
    else
        while ( b != 0 )
        {
            c = b;
            b = a % b;
            a = c;
        }
        return a;
}
int main(void){
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for( i = 0; i < n; i++)
    scanf("%d",&a[i]);
    for(j = 1; j < n; j++)
    a[j] = gcd( a[j-1], a[j]);
    printf("%d\n", a[n-1]);
    getch();
      scanf("%d",&n);
    return 0;
}
