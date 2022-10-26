#include <stdio.h>
#include <string.h>
int main(void){
    char n[35];
    scanf("%s", n);
    int temp, le, i;
    long long res;
    res = 1;
    le = strlen(n);
    for( i = 0; i < le; i++){
         temp = n[i] - 48;
         if(temp % 2 == 0)
         res *= temp;
         }
    if( res == 1)
    printf("-1\n");
    else
    printf("%lld\n",res);
    getch();
    return 0;
}
