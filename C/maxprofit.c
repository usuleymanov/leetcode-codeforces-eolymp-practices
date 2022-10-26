#include <stdio.h>
int main(void){
    int a[] = {100, 150, 200, 5, 50, 150};
    int min = a[0];
    int maxdif = 0;
    int i;
    for(i = 0; i < 6; i++){
      if( a[i] > min){
          if(a[i] - min > maxdif)
            maxdif = a[i] - min;
      }
      else
         min = a[i];
    }
    printf("%d\n", maxdif);
    getch();
    return 0;
}
