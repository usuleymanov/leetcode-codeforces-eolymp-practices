#include <stdio.h>
#include <string.h>
int main(){
  int n, i, j, t;
  int a[110][110];
  scanf("%d", &n);
  for(i = 0; i < n; i++)
    for(j = 0; j < n; j++){
      scanf("%d", &a[i][j]);
  }
  t = 1;
  for(i = 0; i < n; i++)
    for( j = i + 1; j < n; j++){
      if(a[i][j]){
        printf("%d %d\n", i + 1, j + 1);
        t = 0;
      }
    } 
  if(t)
    printf("\n");
  getch();
  return 0;
}
