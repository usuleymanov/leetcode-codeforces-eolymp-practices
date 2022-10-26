#include <cstdio>
#include <algorithm>
using namespace std;

struct team{
  int st;
  int pe;
  int tn;
};
int f(team a, team b){
    if( a.st == b.st && a.pe == b.pe)
    return a.tn < b.tn;
    else if( a.st == b.st)
    return a.pe < b.pe;
    return a.st > b.st;
}
int main(void){
  int n, i;
  scanf("%d", &n);
  team a[n];
  for( i = 0; i < n; i ++){
     a[i].tn = i;
     scanf("%d %d" , &a[i].st, &a[i].pe);
     }
  sort(a,a + n, f);
  printf("%d", a[0].tn + 1);
  for(i = 1; i < n; i++)
    printf(" %d", a[i].tn + 1);
  scanf("%d", &n);
  return 0;
}
