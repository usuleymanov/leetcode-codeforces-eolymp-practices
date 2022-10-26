#include <stdio.h>
#include <string.h>
int main(){
  int a[110][110];
  int n, i , j;
  scanf("%d", &n);
  int t = 1;
  for( i = 0; i < n; i++){
    for( j = 0; j < n; j++)
      scanf("%d", &a[i][j]);
  }
  for(i = 0; i < n; i++)
    for(j = 0; j < i; j++){
      if(a[i][j] != a[j][i]){
        t = 0; 
        break;
      }  
    }
  for(i = 0; i < n; i++){
    if(a[i][i] == 1){
      t = 0;
      break;
    }
  }
  if(t)
    printf("YES\n");
  else
    printf("NO\n");
  scanf("%d", &n);
  return 0;
}
