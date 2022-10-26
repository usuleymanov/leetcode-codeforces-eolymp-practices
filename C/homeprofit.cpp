#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;
class Solution{
  public:
  int maxProfit(vector<int>& nums){
    int n = nums.size();
    if( n == 0)
      return 0;
    if( n == 1)
      return nums[0];
    if( n == 2)
      return max(nums[1], nums[0]);
    int i;
    int f[n + 5];
    f[0] = nums[0];
    f[1] = max(nums[1], f[0]);
    for(i = 2; i < n; i++){
      f[i] = max(nums[i] + f[i - 2], f[i - 1]);
    }
    return f[n - 1];
  }
};
int main(){
  Solution s;
  int g;
  int a[] = {5, 4, 6, 8, 10, 15, 2};
  vector<int> b(a, a + 2);
  int res = s.maxProfit(b);
  printf("%d\n", res);
  scanf("%d", &g);
  return 0;
}
      
