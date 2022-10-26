#include <stdio.h>
int main(void){
    char l;
    int max, min, pos, res;
    pos = max = min = 0;
    while( scanf("%c", &l), l == 'R' || l == 'S' || l == 'L'){
           if( l == 'R')
           pos++;
           if( l == 'L')
           pos--;
           if(pos < min)
           min = pos;
           if( pos > max)
           max = pos;
           }
    res = max - min + 1;
    printf("%d\n", res);
    getch();
    return 0;
}
