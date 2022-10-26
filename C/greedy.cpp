#include <cstdio>
#include <algorithm>
using namespace std;

struct clock {
    int bh;
    int bm;
    int lh;
    int lm;   
};

/*int f(clock c, clock d){
    if(c.lh == d.lh)
      return c.lm < d.lm;
      
    return c.lh < d.lm;
}
   */
int main(void){
    int n. i, m;
    scanf("%d", &n);
    clock t[n];
    for(i = 0; i < n; i++)
     scanf("%d:%d %d:%d", &t[i].bh, &t[i].bm,  &t[i].lh,  &t[i].lm);
    //sort(t, t + n,f);
    i = 1;
    int res = 0;
    for( m = 2; m < n; m++){
      if( t[i].lh == t[m].bh){
        if( t[i].lm < t[m].bm){
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
