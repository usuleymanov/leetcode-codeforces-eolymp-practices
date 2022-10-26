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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if( (p->val > root->val && q->val < root->val) || (p->val < root->val && q->val > root->val))
          return root;
        if( q->val == root->val || p->val == root->val)
          return root;
        if(q->val > root->val)
          return lowestCommonAncestor(root->right, p, q);
        return lowestCommonAncestor(root->left, p, q);
    }
};
Solution s;

int main(void)
{
  TreeNode *a = new TreeNode(5);
  a->left = new TreeNode(3);
  a->right = new TreeNode(7);
  a->left->left = new TreeNode(2);
  a->left->right = new TreeNode(4);
  a->right->left = new TreeNode(6);
  a->right->right = new TreeNode(9);
  //                 5
  //           3            7  
  //         2  4         6   9
  TreeNode* res = s.lowestCommonAncestor(a, a->right,a->left->right );
  printf("%d\n", res->val);
  int n;
  scanf("%d", &n);
  return 0;}
