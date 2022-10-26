#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

struct TreeNode 
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution 
{
public:
  bool isBalanced(TreeNode* root) 
  {
    return (Height(root) != -1);
  }
    
  int Height(TreeNode* root) 
  {
    if(root == NULL) 
      return 0;
    int Left = Height(root->left);
    int Right = Height(root->right);
    if((Left == -1) || (Right == -1) || (abs(Left - Right) > 1)) 
      return -1;
    return max(Left,Right) + 1;        
  }
};

Solution s;

int main(void)
{
  TreeNode *a = new TreeNode(5);
  a->left = new TreeNode(4); a->right = new TreeNode(8);
  a->left->left = new TreeNode(11);
  //a->left->left->left = new TreeNode(7); a->left->left->right = new TreeNode(2);

  a->right->left = new TreeNode(13); a->right->right = new TreeNode(4);
  a->right->left->right = new TreeNode(1);

  //                 5
  //           4            8  
  //           11      13       4
  //         7    2       1
  //

  int res = s.isBalanced(a);
  printf("%d\n",res);
  int n;
  scanf("%d", &n);
  return 0;
}
