#include <cstdio>
#include <algotithm>
using namespace std;

int main(void)
{
  int n, i, b;
  b = 0;
  scanf("%d",&n);
  int m[n+5];
  for(i = 1; i < n +1; i++) 
    scanf("%d",&m[i]);
  sort(m+1,m+n+1);
       for(i = 1; i < n; i++){
         if(m[i] =! i){
                 printf("%d\n", i);
                 b = 1;
                 break;
                 } 
             }
       if( b == 0)
       printf("0\n");
       getch();
       return 0;
}
