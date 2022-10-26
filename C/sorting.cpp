#include <cstdio>
#include <algorithm>
using namespace std;

int main(void){
    int m;
    scanf("%d", &m);
    int n[m+5];
    int k[m+5];
    int i;
    for(i = 0; i < m; i++)
    k[i] = 1;
    for(i = 0; i < m; i++){
    scanf("%d", &n[i]);
    if(n[i] <= m)
    k[n[i] - 1]--;
}
    int t = 0;
    for( i = 0; i < m; i++){
         if( k[i] == 1)
         {
             t = 1;
             printf("%d\n", i + 1);
             break;
         }
         }
         if( t == 0)
         printf("0\n");
    scanf("%d", &m);
    return 0;
}
