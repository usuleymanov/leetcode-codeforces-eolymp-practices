#include <stdio.h>
#include <string.h>
#define MAX 101
int g[MAX][MAX], used[MAX];
int n, m, i, j, a, b;

void dfs(int v)
{
  int i;
  used[v] = 1;
  for(i = 1; i <= n; i++)
    if ((g[v][i] == 1) && (used[i] == 0))
    {
      printf("%d %d\n",v,i);
      dfs(i);
    }
}

int main(void)
{
  scanf("%d %d",&n,&m);
  memset(g,0,sizeof(g)); memset(used,0,sizeof(used));
  for(i = 0 ; i < m; i++)
  {
    scanf("%d %d",&a,&b);
    g[a][b] = g[b][a] = 1;
  }
  dfs(1);
  scanf("%d", &n);
  return 0;
}
