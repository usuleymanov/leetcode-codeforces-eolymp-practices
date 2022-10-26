#include <stdio.h>
int main(void){
    int h, w, i, j;
    scanf("%d %d", &w, &h);
    int a[510][510];
    int b[510][510];
    for(i = 0; i < h; i++)
     for(j = 0; j < w; j++)
      scanf("%d", &a[i][j]);
      
    for(i = 0; i < h; i++)
     for(j = 0; j < w; j++)
      scanf("%d", &b[i][j]);
    long long res = 0;
    for(i = 0; i < h; i++){
      for(j = 0; j < w; j++){
        if(b[i][j] == 1)
          res += (long long)a[i][j];
          }
        }
    printf("%lld\n", res);
    scanf("%d", &j);
    return 0;
}
