#include <stdio.h>
#include <math.h>
int x[100005];
long long findXi(int j){
     if( j == 0)
     return 1;
     else if ( x[j] != -1)
     return x[j];
     x[j] = (findXi(j - sqrt(j)) + findXi(log(j)) + findXi(j*sin(j)*sin(j)))%1000000;     
     return x[j];
     }
int main(void){
    int i,l;
    scanf("%d", &i);
    for( l = 0; l < i + 10; l++)
    x[l] = -1;
    long long res = findXi(i) % 100000;
    printf("%lld\n",res);
    getch();
    return 0;
}
