#include <stdio.h>
int main(void){
    int n;
    scanf("%d", &n);
    if( n % 2 == 0){
    char t;
    int j;
    for( j = 0; j < n + 1; j++)
         scanf("%c", &t);
    printf("Ok\n");
    }
    else {
         int a[200];
         int i;
         char ch;
         for( i = 0; i < 200; i++)
            a[i] = 0;
         for( i = 0; i < n + 1; i++){
              scanf("%c", &ch);
              a[ch]++;
              }
         for( i = 0; i < 200; i++){
              if( (a[i] % 2 == 1) && i != 32 && i!= 10){
                  ch = i;
                  printf("%c\n", ch);
                 
              }
         }
         }
    getch();
    return 0;
}
