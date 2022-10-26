#include <stdio.h>
int main(void){
    int n, t,res;
    scanf("%d", &n);
     t = 1;
    while(n%2 == 0){
    n /= 2;
    t *= 2;
    }
    res = (n -1)*t;
    printf("%d\n", res);
    scanf("%d", &t);
    return 0;
}
