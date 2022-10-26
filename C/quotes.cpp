#include <stdio.h>
#include <string.h>
int main(void){
    int n, i, m, j;
    scanf("%d", &n);
    char q[110][1100];
    for(i = 0; i < n; i++)
     scanf("%s", q[i]);
    int c = n;
    for(i = 0; i < n; i++){
      m = strlen(q[i]);
      for( j = 0; j < m; j++){
        if( q[i][j] == 'C'){
         if( j != m - 1 && q[i][j + 1] == 'D'){
           c--;
           break;
         }
        }
      }
    }
    printf("%d\n", c);
    scanf("%d", &n);
    return 0;
}
