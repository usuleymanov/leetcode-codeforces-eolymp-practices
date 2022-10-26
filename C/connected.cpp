#include <cstdio>
#include <cstring>
using namespace std;
int n, c;
int arr[110][110];
int used[110];
void dfs(int v){
  used[v] = 1;
  int k;
  for(k = 1; k <= n; k++){
    if(arr[v][k] == 1 && used[k] == 0)
    dfs(k);
  }
  
}
int main(){
  int i, j;
  c = 0;
  memset(used, 0, sizeof(used));
  scanf("%d", &n);
  for(i = 1; i <= n; i++){
    for( j = 1; j <= n; j++){
    scanf("%d", &arr[i][j]);
  }
}
  for( i = 1; i <= n; i++)
    if(used[i] == 0){
      c++;
      dfs(i);
      }
  printf("%d\n", c);
  scanf("%d", &n);
  return 0;
}
