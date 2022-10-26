#include <stdio.h>
#include <string.h>
int main(void){
    char m[1010];
    int f, s, i, j;
    scanf("%s", m);
    scanf("%d %d", &f, &s);
    j = s - 1;
    for( i = f - 1; i < (f + s)/ 2; i++){
         char t;
         t = m[i];
         m[i] = m[j];
         m[j] = t;
         j--;
         }
    printf("%s\n", m);
    getch();
    return 0;
}
