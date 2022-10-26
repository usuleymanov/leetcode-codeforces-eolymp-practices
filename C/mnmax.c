#include <stdio.h>
int main(void){
    int n,i, max, min;
    max = -1;
    min = 11;
    scanf("%d", &n);
    int arr[n + 5];
    for(i = 0; i < n; i++)
    scanf("%d", &arr[i]);
    for( i = 0; i < n; i++){
         if(arr[i] < min)
         min = arr[i];
         if(arr[i] > max)
         max = arr[i];
         }
    for( i = 0; i < n; i++){
    if(arr[i] == max)
    arr[i] = min;
    if ( i == n - 1)
    printf("%d\n",arr[i]);
    else
    printf("%d ",arr[i]);
    }
    getch();
    return 0;
    }
