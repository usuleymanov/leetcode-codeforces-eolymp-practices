#include <cstdio>
#include <algorithm>
using namespace std;

 struct ratio {
 int front;
 double rati;
 int posfront;
 int posback;
 };
 
 int f(ratio d, ratio e){
   if(d.rati == e.rati)
      return d.front < e.front;

      return d.rati < e.rati;
 }
 
int main()
{
  int cntr = 0;
  ratio c [21];
  int a [3];
  int b [7];
  for(int  i = 0; i < 3; i++)
  scanf("%d", &a[i]);
  for(int  i = 0; i < 7; i++)
  scanf("%d", &b[i]);
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 7; j++){
    c[cntr].front = a[i];
    c[cntr].posfront = i+1;
    c[cntr].posback = j+1;
    c[cntr].rati = 1.0*a[i]/b[j];
    cntr++;
    }
 }
   sort (c, c+21, f);
   for(int  i = 0; i < 21; i++){
    printf("%.2lf %d %d\n", c[i].rati, c[i].posfront , c[i].posback);
   }
   return 0;
}
