#include <stdio.h>
#include <string.h>
int main(void){
    char n[1009];
    int max, pos, i;
    max = pos = 0;
    scanf("%s", n);
    int length = strlen(n);
    for(i = 0; i < length; i++){
        if( n[i] == 'p')
        pos = 0;
        else
        pos++;
        if( pos > max)
        max = pos;  
          }
    printf("%d\n",max);
    getch();
    return 0;
}
