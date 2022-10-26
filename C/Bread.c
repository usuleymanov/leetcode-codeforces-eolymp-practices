#include <stdio.h>

int i, n, p1, p2, res;
int a[100015];

void run(int pos){
  int v;
  while(a[pos] != -1)
  {
    v = a[pos];
    a[pos] = -1;
    pos = v;
  }
}

int parity(int *a){
  int res, i;
  for(res = i = 0; i < n; i++)
    if (a[i] != -1){
      run(i);
      res++;
    }
  return res % 2;
}
int main(void)
{
  scanf("%d",&n);
  for(i = 0; i < n; i++)
    scanf("%d",&a[i]), a[i]--;
  p1 = parity(a);
  for(i = 0; i < n; i++)
    scanf("%d",&a[i]), a[i]--;
  p2 = parity(a);
  if (p1 == p2) printf("Possible\n");
  else printf("Impossible\n");
  return 0;
}
