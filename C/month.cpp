#include <stdio.h>
int main(void){
    int n, month, year, i;
    int m[14];
    for(i = 1; i < 13; i++)
    m[i] = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
    scanf("%d %d/%d/%d", &month, &month, &month, &year);
    m[month]++;}
    for( i = 1; i < 13; i++)
    printf("%d %d\n", i, m[i]);
    return 0;
}
