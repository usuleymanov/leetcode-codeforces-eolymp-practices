#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
  int n;
  int res = 0;
  scanf("%d", &n);
  if( n % 10 != 0)
    printf("-1\n");
  else{
    while( n > 0){
      if( n >= 500){
          res++;
          n -= 500;
      }
      else if( n >= 200){
          res++;
          n -= 200;
      }
      else if( n >= 100){
          res++;
          n -= 100;
      }
      else if( n >= 50){
          res++;
          n -= 50;
      }
      else if( n >= 20){
          res++;
          n -= 20;
      }
      else if( n >= 10){
          res++;
          n -= 10;
      }
    }
    printf("%d\n", res);
  }
  scanf("%d", &n);
  return 0;
}
