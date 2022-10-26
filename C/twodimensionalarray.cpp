#include <stdio.h>
#include <string.h>
int main(void){
    int h, w, i, j;
    scanf("%d %d", &w, &h);
    char a[111][111];
    char b[111][111];
    char v[6];
    for(i = 0; i < h; i++)
      scanf("%s",a[i]);
    for(i = 0; i < h; i++)
      scanf("%s",b[i]);
    scanf("%s", v);
      
    for(i = 0; i < h; i++){
      for(j = 0; j < w; j++){
        if(a[i][j] == '0' && b[i][j] == '0')
          printf("%c", v[0]);
        else if(a[i][j] == '0' && b[i][j] == '1')
          printf("%c", v[1]);
        else if(a[i][j] == '1' && b[i][j] == '0')
          printf("%c", v[2]);
        else if(a[i][j] == '1' && b[i][j] == '1')
          printf("%c", v[3]);
          }
        printf("\n");
        }
    scanf("%d", &j);
    return 0;
}
