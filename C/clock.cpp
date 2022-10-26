#include<cstdio>
#include<algorithm>
using namespace std;

 struct MyTime {
 int h, m, s;
 };
 
 int f(MyTime a, MyTime b) {
    if((a.h == b.h) && (a.m == b.m)) return a.s < b.s;
    if(a.h == b.h) return a.m < b.m;
    return a.h < b.h;
 } 
 
 int main(void) {
   MyTime *p;
   int n; 
   scanf("%d\n", &n);
   p = new MyTime[n];
   for(int i = 0; i < n; i++) {
   scanf("%d %d %d", &p[i].h, &p[i].m, &p[i].s);
   }
   sort(p, p + n, f);
   for(int i = 0; i < n; i++) {
    printf("%d %d %d\n", p[i].h, p[i].m, p[i].s);
    } 
    delete[] p;
    scanf("%d", &n);
    return 0;
 }
