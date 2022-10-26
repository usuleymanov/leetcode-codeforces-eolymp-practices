#include <stdio.h>
int main(void){
long long n, m, res1,t, res2;
while(scanf("%lld %lld", &m, &n), n >= 0){
                  res1 = res2 = 0;
                  m--;
                  while(m > 0){
                  t = m%10;
                  res1 += (t *(t+1))/2;
                  res1 += (m/10)*45;
                  m = m / 10;
                     }
                  while(n > 0){
                  t = n%10;
                  res2 += (t *(t+1))/2;
                  res2 += (n/10)*45;
                  n = n / 10;
                  }
                printf("%lld\n", res2 - res1);
                  }
                  getch();
                  return 0;
}
