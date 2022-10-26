#include <stdio.h>
int main(){
  int n, i, j;
  int a[110][110];
  scanf("%d", &n);
  for(i = 0; i < n; i++)
    a[i][n] = 0;
  for(i = 0; i < n; i++)
    for(j = 0; j < n; j++){
      scanf("%d", &a[i][j]);
      a[i][n] +=a[i][j];
    }
  for(i = 0; i < n; i++){
    printf("%d ", a[i][n]);
    for(j = 0; j < n; j++){
      if(a[i][j] == 1)
        printf("%d ", j + 1);
    }
    printf("\n");
  }
  getch();
  return 0;
}
