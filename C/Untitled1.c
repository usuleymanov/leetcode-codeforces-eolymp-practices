#include<stdio.h>

int main(void){
    long long n, m;
    scanf("%lld %lld",&m, &n);
    long long res = (n - 1)*(m - 1) + 1;
    printf("%lld\n", res);
    getch();
    return 0; 
    }
