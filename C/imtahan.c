#include <stdio.h>
int main(){
  printf("%d\n", "frr");
  int *b = {1, 2, 3, 4, 5, 6} ;
  //b = "asd";
  printf("%u", b + 1);
  getch();
  return 0;
}
