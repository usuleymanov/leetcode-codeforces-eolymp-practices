#include <cstdio>
#include <vector>
using namespace std;
class Solution{
   public:
   int maxProfit(vector<int>& num){
     int n = num.size();
     if(n == 0)
       return 0;
     int min = num[0];
     int maxdif = 0;
     int i;
     for(i = 0; i < n; i++){
      if( num[i] > min){
          if(num[i] - min > maxdif)
            maxdif = num[i] - min;
      }
      else
         min = num[i];
    }
    return maxdif;
   }    
};

int main(){
    Solution s;
    int b[5] = {12, 7, 56, 31, 59};
    vector<int> a(b, b + 5);
    int max;
    max = s.maxProfit(a);
    printf("%d\n", max);
    scanf("%d", &max);
    return 0;
}
