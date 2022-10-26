#include <stdio.h>
#include <string.h>
int main(void){
    char a[100];
    int n, i;
    double c;
    long long area;
    long long allArea = 0;
    long long bedRoomArea = 0;
    long long balcon = 0;
    double cost = 0;
    scanf("%d %lf", &n, &c);
    for(i = 0; i < n; i++){
      scanf("%lld %s", &area, a);
      allArea += area;
      if( a[1] == 'e')
        bedRoomArea += area;
      
      if( a[2] == 'l')
        balcon += area;
          }
    cost = c*(allArea - balcon) + 0.5*c*balcon;
    printf("%lld\n%lld\n%.6lf\n", allArea, bedRoomArea, cost);
    getch();
    return 0;
}
