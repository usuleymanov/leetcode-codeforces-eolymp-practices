#include <stdio.h>
int main(){
  int a[] = {4, 8, 6, 7, 4 , 5};
  int i, val = 4;
  int n = 5;
  //int j = n - 1;
  for(i = 0; i < n + 1; i++){
    if(a[i] == val){
      a[i] = a[n];
      n--;
      i--;
    }
  }
  //n = j + 1;
  for(i = 0;i < n + 1; i++)
    printf("%d ", a[i]);
  scanf("%d", &n);
  return 0;
}
