#include <cstdio>
#include <algorithm>
using namespace std;

int main(void)
{
  int n, i,j, b;
  b = 0;
  scanf("%d",&n);
  int m[n+5];
  for(i = 0; i < n; i++) 
    scanf("%d",&m[i]);
  sort(m,m+n);
       for(j = 1; j < n+1; j++){
         if( m[j - 1] != j){
                 printf("%d\n", j);
                 b = 1;
                 break;
                 } 
             }
       if( b == 0) printf("0\n");
       scanf("%d", &b);
       return 0;
}
