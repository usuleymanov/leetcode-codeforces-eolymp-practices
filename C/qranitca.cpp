#include <stdio.h>
#include <string.h>
int main(void){
    int h, w, i, j;
    scanf("%d %d", &w, &h);
    char a[111][111];
    for(i = 0; i < h; i++)
      scanf("%s",a[i]); 
    int res = 0;
    for(i = 0; i < h; i++){
      for(j = 0; j < w; j++){
        if( a[i][j] == 'A'){
          if( i != 0 && a[i - 1][j] == 'B')
              res++;
          if( i != (h-1) && a[i + 1][j] == 'B')
              res++;
          if( j != 0 && a[i][j - 1] == 'B')
              res++;
          if( j != (w - 1) && a[i][j + 1] == 'B')
              res++;
        }
       }
      }
    printf("%d\n", res);
    scanf("%d", &j);
    return 0;
}
