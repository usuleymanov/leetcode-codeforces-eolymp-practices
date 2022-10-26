#include <cstdio>
#include <algorithm>
using namespace std;

int m[100009];
long long swaps = 0;
struct card{
  int red;
  int blue;
};
int f(card a, card b){
    if( a.red == b.red)
    return a.blue < b.blue;
    return a.red < b.red;
}

void merge(int left, int middle, int right)
{
  int i = left, j = middle + 1;
  while((i <= middle) && (j <= right))
  {
    if (m[i] <= m[j])
      i++;
    else
    {
      j++;
      swaps += middle - i + 1;
    }
 }
  sort(m + left, m + right + 1);
}
void mergeSort(int left, int right)
{
  if (left < right)
  {
    int middle = (left + right) / 2;
    mergeSort(left,middle);
    mergeSort(middle+1,right);
    merge(left, middle, right);
  }
}
int main(void){
  int n, i, j;
  scanf("%d", &n);
  card a[n];
  for( i = 0; i < n; i++){
     scanf("%d %d", &a[i].red, &a[i].blue);
     }
  sort(a,a + n, f);
  for(int i = 0; i < n; i++)
    m[i] = a[i].blue;
  mergeSort(0, n - 1);
  printf("%lld\n", swaps);
  scanf("%d", &n);
  return 0;
}
