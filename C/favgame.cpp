#include <cstdio>
#include <algorithm>
using namespace std;

int main(void){
    int n, i, t, pos;
    scanf("%d", &n);
    double max, m;
    max = 0.0;
    double a[1005];
    for(i = 0; i < 1004; i++)
    a[i] = 0.0;
    for( i = 0; i < n; i++){
    scanf("%d", &t);
    scanf("%lf", &m);
    a[t] += m;
}
    for(i = 0; i < 1004; i++){
          if( a[i] > max){
              max = a[i];
              pos = i;
          }
          }
    printf("%d\n", pos);
    return 0;
}
