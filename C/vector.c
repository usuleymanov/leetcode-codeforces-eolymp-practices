#include <stdio.h>

int gcd(int a, int b){
    if(a == 0) return b;
    if(b == 0) return a;
    if(a > b) return gcd(a%b, b);
    return gcd(a, b%a);
}
int main(void){
    int a, b, c, d, res;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int den = (d*b) / gcd(b, d);
    int num = (den / b)*a + (den / d)*c;
    int t = gcd(den, num);
    den = den / t;
    num = num / t;
    if(den == 1)
      printf("%d\n", num);
    else
      printf("%d %d\n", num, den);
    getch();
    return 0;
}
