#include <cstdio>
using namespace std;
int n, a, b, d, res, c;
int arr[100][100];
int used[100];
void dfs(int v){
  used[v] = 1;
  if( c > d){
    c--;
    used[v] = 0;
    return ;
  }
  if( v == b){
    res++;
    c--;
    used[v] = 0;
    return ;
  }
  int i;
  for( i = 1; i <= n; i++){
    if( arr[v][i] == 1 && used[i] != 1){
      c++;
      dfs(i);
      }
  }
  c--;
  used[v] = 0;
}
int main(){
  int k, i, t1, t2, j;
  res = 0;
  c = 0;
  scanf("%d %d %d %d %d", &n, &k, &a, &b, &d);
  for( i = 0; i <= n; i++)
    used[i] = 0;
  for(i = 0; i <= n; i++)
    for( j = 0; j <= n; j++)
      arr[i][j] = 0;
  for(i = 0; i < k; i++){
    scanf("%d %d", &t1, &t2);
    arr[t1][t2] = 1;      
  }
  dfs(a);
  printf("%d\n", res);
  scanf("%d", &k);
  return 0;
}
