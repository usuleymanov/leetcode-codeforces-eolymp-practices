#include <stdio.h>
int main(void){
    long long n, k, c, t,fi, se, th, fo, i, res;
    while(scanf("%lld %lld", &n, &k), n != 0){
    c = 1;
    t = n;
    if(k > n )
    t = k;
    for( i = 1; i <= t; i++){
     c = (c*(n - 1))% 10000007;
     if( i == k) fi = (2 * c) % 10000007;
     if( i == (n - 1)) se = (2 * c) % 10000007;
     }
      c = 1;
    for( i = 1; i <= t; i++){
     c = (c*n)% 10000007;
     if( i == k) th = c;
     if( i == n) fo = c;
     }
     res = (fi + se + th + fo) % 10000007;
    printf("%lld\n", res);
}
    getch();
    return 0; 
}
