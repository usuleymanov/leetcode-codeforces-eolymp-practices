#include <cstdio>
#include <algorithm>
using namespace std;

int f(int a, int b){
 if(a%10 == b%10) return a < b;
  return a%10 < b%10;
 }
int main()
{
  int n;
  scanf("%d", &n);
  int a[n];
  for(int i = 0; i < n; i++)
   scanf("%d", &a[i]);
   sort(a, a + n, f);
    for(int  i = 0; i < n; i++)
   printf("%d ",a[i]);
   return 0;
}
