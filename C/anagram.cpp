#include <stdio.h>
#include <string.h>
int main(void){
    char n[260];
    char m[260];
    char a[370];
    int i;
    for(i = 0; i < 370;i++)
    a[i] = 0;
    scanf("%s %s",n, m);
    int b = strlen(n);
    int c = strlen(m);
    for( i = 0; i < b; i++)
    a[n[i]]++;
    for(i = 0; i < c; i++)
    a[m[i]]--;
    int t = 0;
    for( i = 0; i < 370; i++){
         if( a[i] != 0){
         t = 1;
         printf("NO\n");
         break;
         }
         }
    if( t == 0)
    printf("YES\n");
    return 0;
}
