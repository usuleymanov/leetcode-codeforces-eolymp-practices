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

class Solution
{
public:
  TreeNode* invertTree(TreeNode* root) 
  {
    if (root == NULL) return root;
    TreeNode* temp = root->left;
    root->left = invertTree(root->right);
    root->right = invertTree(temp);
    return root;
  }
};


Solution s;

int main(void)
{
  TreeNode *a = new TreeNode(1);
  //a->left = new TreeNode(4); 
  a->right = new TreeNode(2);
  //a->left->left = new TreeNode(11);
  //a->left->right = new TreeNode(7);

  a->right->left = new TreeNode(3);
  //a->right->right = new TreeNode(3);

  //                 5
  //           4            2  
  //         11  7        8   3
  
  vector<int> res = s.inorderTraversal(a);
  for(int i = 0; i < res.size(); i++)
    printf("%d ",res[i]);
  printf("\n");
    int n;
  scanf("%d", &n);
  return 0;
  }
