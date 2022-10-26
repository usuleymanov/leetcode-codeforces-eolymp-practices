#include <cstdio>
#include <cstring>
using namespace std;
int g[100][100];
long long salary[100];
int n, t;
long long dfs(int v){
  if(salary[v] != 0)
    return salary[v];
  t = 1;
  int i;
  for( i = 1; i <= n; i++)
    if(g[v][i] == 1){
      salary[v] += dfs(i);
      t = 0;
    }
  if(t){
    salary[v] = 1;
    return 1;      
  }
  return salary[v];
}
int main(){
  int i, j, a;
  long long res;
  char s[1000];
  while(scanf("%d", &n) == 1){
    gets(s);
    memset(salary, 0, sizeof(salary));
    for(i = 1; i <= n; i++){
      gets(s);
      for(j = 0; j < n; j++){
        if(s[j] == 'Y')
          g[i][j + 1] = 1;
        else
          g[i][j + 1] = 0;
        }
      }
  for( i = 1; i <= n; i++)
     dfs(i);
  res = 0;
  for(i = 1; i <= n; i++)
    res += salary[i];
  printf("%lld\n", res);
}
  return 0;
}
