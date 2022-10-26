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
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++)
    scanf("%d",&a[i]);
    for(int i = 1; i < n; i++)
    a[i] = gcd( a[i-1], a[i]);
    printf("%d\n", a[n-1]);
    return 0;
}
