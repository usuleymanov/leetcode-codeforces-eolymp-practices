#include <cstdio>
#include<cstring>
using namespace std;
int n, m, i, j, res;
int arr[110][110];
void dfs(int a, int b){
  if(arr[a][b - 1] == 0){
    arr[a][b - 1] = 1;
    dfs(a, b - 1);     
}
  if(arr[a][b + 1] == 0){
    arr[a][b + 1] = 1;
    dfs(a, b + 1);     
}
  if(arr[a - 1][b] == 0){
    arr[a - 1][b] = 1;
    dfs(a - 1, b);     
}
  if(arr[a + 1][ b] == 0){
    arr[a + 1][b] = 1;
    dfs(a + 1, b);     
}
}
int main(){
  memset(arr, 1, sizeof(arr));
  scanf("%d %d", &n, &m);
  for(i = 1; i <= n; i++)
    for(j = 1; j <= m; j++)
      scanf("%d", &arr[i][j]);
  res = 0;
  for(i = 1; i <= n; i++)
    for( j = 1; j <= m; j++){
      if(arr[i][j] == 0){
        res++;
        dfs(i , j);
      }
    }
    printf("%d\n", res);
    scanf("%d", &n);
    return 0;
}
