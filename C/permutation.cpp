#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cctype>
using namespace std;
int main(void){
    int n, i, j;
    char a[100];
    char b[100];
    scanf("%d", &n);
    for( i = 0; i < n; i++){
         scanf("%s %s", a, b);
         
         for( j = 0; j < strlen(a); j++)
              a[j] = tolower(a[j]);
         for( j = 0; j < strlen(b); j++)
              b[j] = tolower(b[j]);
         if(strlen(a) != strlen(b)) printf("No\n");
         else {
         int m = strlen(a);
         sort(a, a + m);
         sort(b, b + m);
         int c = 1;
         for( j = 0; j < m; j++){
           if(a[j] != b[j]){
                 printf("No\n");
                 c = 0;
                 break; 
                 }
              }
           if(c) printf("Yes\n");
         }
    }
    return 0;
}
