#include <stdio.h>
int main(void){
    long long h, w, l, k, res;
    scanf("%lld %lld %lld %lld", &h, &w, &l, &k);
    long long vol = h*w*l;
    if( vol % k == 0){
         res = vol / k;
    }
    else {
         res = vol / k + 1;
    }
    printf("%lld\n",res);
    getch();
    return 0;
}
