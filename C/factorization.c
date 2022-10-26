#include <stdio.h>
#include <math.h>
int main(void){
    int n, i;
    int arr[100];
    int c = 0;
    scanf("%d", &n);
    for( i = 2; i <= sqrt(n); i++){
         while(n % i == 0){
                 arr[c] = i;
                 c++;
                 n = n / i;
                 }
         }
    if( n != 1){
        arr[c] = n;
        c++;
        }
    for( i = 0; i < c; i++)
    printf("%d ", arr[i]);
    getch();
    return 0;
}
