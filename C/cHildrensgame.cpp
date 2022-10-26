#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;

string a[10000];
char ch[10000];

int f(string a, string b) {
return a + b > b + a;
}

int main(void) {
 int n;
 scanf("%d", &n);
 while(n != 0) {
  for(int i = 0; i < n; i++) {
  scanf("%s", ch);
  a[i] = ch;
}
  sort(a, a + n, f);
  for(int i = 0; i < n; i++) {
  printf("%s", a[i].c_str());
  }
  printf("\n");
  scanf("%d", &n);
  if(n == 0) break;
  }
  
  scanf("%d", &n);
 return 0;
}
