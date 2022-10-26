#include <stdio.h>
int main(void){
    int a, b, c, d;
    scanf("%d %d %d", &a, &b, &c);
    d = 0;
    if( a % 2 == 0 || b % 2 == 0 || c % 2 == 0)
    d++;
    if( a % 2 != 0 || b % 2 != 0 || c % 2 != 0)
    d++;
    if( d == 2)
    printf("YES\n");
    else 
    printf("NO\n");
    getch();
    return 0;
}
