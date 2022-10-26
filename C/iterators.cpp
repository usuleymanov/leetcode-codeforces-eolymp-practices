#include <cstdio>
#include <vector>
using namespace std;
int main(){
  int k, i, t, v, n, s;
  scanf("%d %d", &s, &k);
  vector<vector<int> > a(100100);
  vector<int>::iterator myIterator;
  for(i = 0; i < k; i++){
    scanf("%d", &t);
    if( t == 1){
      scanf("%d %d", &v, &n);
      a[v].push_back(n);
      a[n].push_back(v);
    }
    else {
      scanf("%d", &v);
      if(a[v].size() == 0)
        printf("\n");
      else{
        for(myIterator = a[v].begin(); myIterator != a[v].end(); myIterator++){
          printf("%d ", *myIterator);
        }
        printf("\n");
      }
    }
  }
  scanf("%d", &k);
  return 0;
}
