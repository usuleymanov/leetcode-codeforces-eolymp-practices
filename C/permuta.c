#include <cstdio>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;
int main(void){
    int n, i, j;
    char a[100];
    char b[100];
    char t;
    scanf("%d", &n);
    for( i = 0; i < n; i++){
         scanf("%s %s", &a, &b);
         
         for( j = 0; j < strlen(a); j++){
              a[j] = tolower(a[j]);
              printf("%s", a[j]);
         }
    }
}
