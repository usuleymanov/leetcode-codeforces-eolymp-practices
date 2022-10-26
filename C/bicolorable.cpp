#include <stdio.h>
#include <string.h>
#define MAX 1001

int g[MAX][MAX], mark[MAX], Error;
int i, a, b, n, l;

void dfs(int v,int color)
{
  if (Error) return;
  mark[v] = color;
  for(int i = 1; i <= n; i++)
    if (g[v][i])
      if (!mark[i]) dfs(i,3-color);else
      if (mark[v] == mark[i]) Error = 1;
}

int main(void) 
{ 
  //freopen("3165.in","r",stdin);
  while(scanf("%d %d",&n,&l),n)
  {
     memset(g,0,sizeof(g));
     memset(mark,0,sizeof(mark));
     for(i = 0; i < l; i++)
     {
       scanf("%d %d",&a,&b);
       g[a][b] = g[b][a] = 1;
     }
     Error = 0; dfs(1,1);
     if (Error) printf("NOT BICOLOURABLE.\n");
           else printf("BICOLOURABLE.\n");
  }
  return 0;
} 
