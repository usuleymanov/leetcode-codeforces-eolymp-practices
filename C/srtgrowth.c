#include <stdio.h>
int main(void){
    int n, i, res, a, b;
    int t[20090];
    while( scanf("%d", &n) == 1){
      res = 0;
      for(i = 0; i < n; i++)
        scanf("%d", &t[i]);
      scanf("%d %d", &a, &b);
      for(i = 0; i < n; i++){
        if(t[i] >= a && t[i] <= b)
          res++;
      }
      printf("%d\n", res);
    }
    getch();
    return 0;
}
