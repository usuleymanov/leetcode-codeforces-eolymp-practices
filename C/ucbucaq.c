#include <stdio.h>
#include <math.h>
int main(void){
    double x1, y1, x2 , y2, x3, y3, p, s;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    double a, b, c;
    a = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
    b = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));
    c = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
    printf("%0.4lf ", a + b + c);
    p = (a + b + c) / 2.0;
    s = sqrt(p*(p - a)*(p - b)*(p - c));
    printf("%0.4lf\n", s);
    getch();
    return 0;
}
