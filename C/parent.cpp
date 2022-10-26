#include <cstdio>
using namespace std;
int main(){
  int n, i, m, a, b, t, j;
  scanf("%d", &n);
  int arr[100005];
  for( i = 1; i <= n; i++)
    scanf("%d", &arr[i]);
  scanf("%d", &m);
  for(i = 0; i < m; i++)
  {
    scanf("%d %d", &a, &b);
    t = 1;
    j = b;
    while( arr[j] != 0){
     if(arr[j] == a){
       printf("1\n");
       t = 0;
       break;
     }
     j = arr[j];
    }
    if( t)
      printf("0\n");
  }
  return 0;
}
