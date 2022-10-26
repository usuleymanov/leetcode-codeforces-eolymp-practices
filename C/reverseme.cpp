#include <cstdio>
#include <vector>
#include <sstream>
#define MAX 500010
using namespace std;

int i, j, val, n;
vector<vector<int> > g;
char s[MAX];

int main(void)
{
  scanf("%d",&n); gets(s);
  g.resize(n + 1);
  for(i = 1; i <= n; i++)
  {
    gets(s);
    stringstream ss(s);
    while (ss >> val)
      g[val].push_back(i);
  }

  printf("%d\n",n);
  for(i = 1; i <= n; i++)
  {
    if (g[i].size())
    {
      printf("%d",g[i][0]);
      for(j = 1; j < g[i].size(); j++)
        printf(" %d",g[i][j]);
    }
    puts("");
  }
  gets(s);
  return 0;
}
