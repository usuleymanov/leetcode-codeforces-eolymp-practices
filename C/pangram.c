#include <stdio.h>
#include <string.h>
int main(void){
    char n[20];
    int a, b, i;
    scanf("%s %d %d", n , &a, &b);
    int m = strlen(n);
    for(i = 0; i < m; i++){
     if( n[i] == a + 48)
       printf("%c", b + 48);
     else
       printf("%c", n[i]); 
      }
     printf("\n");
    getch();
    return 0;
}
