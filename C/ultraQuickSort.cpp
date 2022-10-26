#include <cstdio>
#include <algorithm>
using namespace std;

int m[500001];
int n, i, j;
long long swaps;

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

int main(void)
{
  while(scanf("%d",&n),n)
  {
    swaps = 0;
    for(i = 0; i < n; i++) 
    scanf("%d",&m[i]);
    mergeSort(0, n - 1);
    printf("%lld\n",swaps);
  }
  scanf("%d", &n);
  return 0;

}
