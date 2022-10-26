#include <stdio.h>
int main(void)
{
  int h, m;
  double b;
   while(1) {
    scanf("%d %d", &h, &m);
    if(h == 0 && m == 0)
      break;
    else {
     b = (1.0)*(60*h - 11*m)/2;
     if (b < 0)
       b = -b;
    if (b > 180)
      b = 360 - b;

    if(m < 10)
    printf("At %d:0%d the angle is %.1lf degrees.\n", h, m, b);
    else
    printf("At %d:%d the angle is %.1lf degrees.\n", h, m, b);
}
}
    return 0;
}
