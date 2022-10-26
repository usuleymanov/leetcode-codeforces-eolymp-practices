#include <stdio.h>
int main(void){
    int a, k, res;
    scanf("%d %d", &a, &k);
    res = a |(1 << k);
    printf("%d\n", res);
    getch();
    return 0;
}
