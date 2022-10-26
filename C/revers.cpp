#include <stdio.h>
int main(void){
    int n, a, b, c, d,i,t,b1,d1,;
    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
    int arr[n+1];
    for( i = 1; i <= n;i++)
    arr[i] = i;
    b1 = b;
    for( i = a; i < (a+b)/2; i++){
         t =  arr[i];
         arr[i] = arr[b];
         arr[b1] = t;
         b1--;
         }
         d1 = d;
    for( i = c; i < (c+d)/2; i++){
         t =  arr[i];
         arr[i] = arr[d1];
         arr[d1] = t;
         d1--;
         }
    for(i = 1; i <= n; i++)
    printf("%d ", arr[i]);
    getch();
    return 0;
         
}
