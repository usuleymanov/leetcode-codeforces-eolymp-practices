#include <stdio.h>
int main(void){
double x, y, nx, b;
while(scanf("%lf %lf", &x, &y), x != 0){
    b = (1.0)*(60*x - 11*y)/2;
     if (b < 0)
       b = -b;
     if( b > 180)
     b = 360 - b;
     if(y < 10)
     printf("At %d:0%d the angle is %.1lf degrees.\n",(int) x, (int) y, b);
     else
     printf("At %d:%d the angle is %.1lf degrees.\n", (int) x, (int) y, b);
} 
  return 0;
  
}
