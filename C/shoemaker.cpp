#include <cstdio>
#include <algorithm>
using namespace std;
struct days{
  double r;
  int p;
};

int f(days d1, days d2){
    if(d1.r == d2.r)
      return d1.p < d2.p;
    return d1.r < d2.r;
}
int main(void){
  int t, i;
  days d[1000];
  int a, b;
  while(scanf("%d", &t) == 1){
    for(i = 0; i < t; i++){ 
      scanf("%d %d", &a, &b);
      d[i].p = i + 1;
      d[i].r = 1.0*a / b;
      }
    sort(d, d + t, f);
    for(i = 0; i < t - 1; i++)
      printf("%d ", d[i].p); 
    printf("%d\n", d[t -1].p);
  }
  scanf("%d", &t);
  return 0;
}
