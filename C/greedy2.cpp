#include <cstdio>
#include <algorithm>
using namespace std;

struct cloc {
    int bh;
    int bm;
    int lh;
    int lm;   
};

int f(cloc c, cloc d){
    if(c.lh == d.lh)
      return c.lm < d.lm;
      
    return c.lh < d.lh;
}
   
int main(){
    int n, i, m;
    scanf("%d", &n);
    cloc t[100];
    for(i = 0; i < n; i++)
     scanf("%d:%d %d:%d", &t[i].bh, &t[i].bm,  &t[i].lh,  &t[i].lm);
    sort(t, t + n, f);
    i = 0;
    int res = 1;
    for( m = 1; m < n; m++){
      if( t[i].lh == t[m].bh){
        if( t[i].lm <= t[m].bm){
            res++;
            i = m;
        }     
        }
      else if(t[i].lh < t[m].bh){
        res++;
        i = m;
      }
    }
    printf("%d\n", res);
    scanf("%d", &n);
    return 0;
}
