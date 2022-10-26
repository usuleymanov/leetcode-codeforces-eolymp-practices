#include <cstdio>
#include <cstring>
using namespace std;
int n;
int arr[110][110];
int used[110];
void dfs(int v){
  used[v] = 1;
  int i;
  for( i = 1; i <= n; i++){
    if(arr[v][i] == 1 && used[i] != 1)
      dfs(i);
  }
}
int main(){
  memset(used, 0, sizeof(used));
  scanf("%d", &n);
  int i, j;
  int sum = 0;
  for( i = 1; i <= n; i++)
    for( j = 1; j <= n; j++){
      scanf("%d", &arr[i][j]);
      sum += arr[i][j];
      }
  sum /= 2;
  if( sum != n - 1){
    
    printf("NO\n");
  }
  else{
    dfs(1);
    int t = 1;
    for( i = 1; i <= n; i++)
      if( used[i] != 1){
        t = 0;
        printf("NO\n");
        break;
      }
    if( t )
      printf("YES\n");
  }
  scanf("%d", &n);
  return 0;
}
