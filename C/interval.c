#include <stdio.h>
#include <math.h>
int main(void){
    double a, b, c, d;
    char w;
    int a1, b1, c1, d1;
    scanf("%lf %c %lf %lf %c %lf", &a, &w, &b, &c,&w, &d);
    a1 = a;
    b1 = b;
    c1 = c;
    d1 = d;
    if( b > d*(log(c)/log(a)))
    printf("%d^%d\n", a1,b1);
    else
    printf("%d^%d\n", c1, d1);
    getch();
    return 0;
}
