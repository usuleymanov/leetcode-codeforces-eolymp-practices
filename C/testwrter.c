#include <stdio.h>
int main(){
  int i, j, t;
  freopen("testwriter.txt", "w", stdout);
  for(i = 0; i < 50; i++){
    for(t = 0; t <= i; t++)
      printf("N");
    for(j = i + 1; j < 50; j++)
      printf("Y");
    printf("\n");
    }
    getch();
    return 0;
}
