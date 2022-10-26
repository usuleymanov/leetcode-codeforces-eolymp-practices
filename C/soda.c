#include <stdio.h>
int main(void){
    int e,f, c, res;
    scanf("%d %d %d", &e, &f, &c);
    if( e + f == 0 )
    res = 0;
    else
    res = (e + f - 1) / (c - 1);
    printf("%d\n", res);
    getch();
    return 0;
}
