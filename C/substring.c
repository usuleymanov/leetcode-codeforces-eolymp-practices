#include <stdio.h>
long long m[46];
int  n,i;

long long f(int n)
{
  if (n == 0) return 1;
  if (n == 1) return 3;
  if (m[n] != -1) return m[n];
  return m[n] = 3 * f(n-1) - f(n-2);
}

int main(void)
{
  scanf("%d",&n);
  for( i = 0; i < 46; i++)
  m[i] = -1;
  printf("%lld\n",f(n));
  getch();
  return 0;
}
