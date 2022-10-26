#include <stdio.h>
int main(void){
    int tc,s, n, p , q, i;
    scanf("%d", &tc);
    for(i = 0; i < tc; i++){
          scanf("%d %d", &s, &n);
          int res = s;
          int j;
          for(j = 0; j < n; j++){
                scanf("%d %d", &p, &q);
                res += p*q;
                }
                printf("%d\n", res);
          }
          getch();
          return 0;
}
