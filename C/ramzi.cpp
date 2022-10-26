#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int t, j, n, p, i, res, m;
    scanf("%d", &t);
    int a[1010];
    for( j = 0; j < t; j++){
      scanf("%d %d", &n, &p);
      for( i = 0; i < p; i++)
         scanf("%d", &a[i]);
      sort(a, a + p);
      res = 0;
      m = p;
      if(m > n)
        m = n;
      for( i = p - 1; i >= p - m; i--)
        res += a[i];
      printf("%d\n", res);
    }
    scanf("%d", &n);
    return 0;
}
