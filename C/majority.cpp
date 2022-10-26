#include <cstdio>
#include <vector>
using namespace std;
class Solution{
  public:
  int majority(vector<int>& nums){
    int val, i;
    int count = 0;
    for(i = 0; i < nums.size(); i++){
      if(count == 0){
        val = nums[i];
        count++;
      }
      else if(val == nums[i]){
         count++;
      }
      else
        count--;
    }
    return val;
  }
};
int main(){
  Solution s;
  int n;
  int a[] = {2,1, 2, 1, 2};
  vector<int> b(a, a + 5);
  int res = s.majority(b);
  printf("%d\n", res);
  scanf("%d", &n);
  return 0;
}
