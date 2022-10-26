#include <stdio.h>
int main(void){
    int a, res;
    char c;
    scanf("%d", &res);
    while(scanf("%c", &c), c == '+' || c == '-'){
                      scanf("%d", &a);
                    if(c == '+')
                    res += a;
                    else
                    res -= a;
                    }
    
    printf("%d\n", res);
    getch();
    return 0;
}
