#include <cstdio>
#include <vector>
using namespace std;

struct TreeNode 
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
          return 0;
        if(root->left == NULL && root->right == NULL)
          return 1;
        if(root->left == NULL)
          return maxDepth(root->right) + 1;
        if(root->right == NULL)
          return maxDepth(root->left) + 1;
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};
Solution s;

int main(void)
{
  TreeNode *a = new TreeNode(5);
  a->left = new TreeNode(4);
  a->right = new TreeNode(2);
  //a->left->left = new TreeNode(11);
  a->left->right = new TreeNode(7);
 // a->right->left = new TreeNode(8);
 // a->right->right = new TreeNode(3);
  //                 5
  //           4            2  
  //         11  7        8   3
  int res = s.maxDepth(a);
  printf("%d\n", res);
  int n;
  scanf("%d", &n);
  return 0;}
