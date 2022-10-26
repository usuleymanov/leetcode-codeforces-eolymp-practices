#include <stdio.h>
int main(void){
    double l, k;
    int res;
    res = 0;
    scanf("%lf %lf", &l, &k);
    while(l > 1.0){
            l = l / k;
            res++;
            }
    if ( res == 0)
    printf("%d\n", res);
    else
    printf("%d\n", res - 1);
    getch();
    return 0; 
}
