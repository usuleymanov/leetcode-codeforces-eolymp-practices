#include <cstdio>
#include<cstring>
using namespace std;
int n, i, j, k, l, res;
int arr[20][20];
void dfs(int a, int b){
  res++;
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
  scanf("%d", &n);
  char t[20];
  char r;
  scanf("%c", &r);
  for(i = 1; i <= n; i++){
    scanf("%s", t);
    for(j = 0; j < n; j++){  
      if( t[j] == '*')
        arr[i][j + 1] = 1;
      else
        arr[i][j +1] = 0;
      }
    }
  res = 0;
  scanf("%d %d", &k, &l);
  arr[k][l] = 1;
  dfs(k, l);
  printf("%d\n", res);
  scanf("%d", &n);
  return 0;
}
