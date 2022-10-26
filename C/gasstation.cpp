#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
  int l, n, i;
  scanf("%d %d", &l, &n);
  int g[1010];
  int max = -1;
  for( i = 0; i < n; i++)
    scanf("%d", &g[i]);
  for(i = 1; i < n; i++){
    if( abs(g[i - 1] - g[i]) > max)
      max = abs(g[i - 1] - g[i]);
  }
  double res = 1.0*max / 2;
  printf("%.1lf\n", res);
  scanf("%d",&n);
  return 0;
}
