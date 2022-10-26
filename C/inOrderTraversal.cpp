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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL)
          return true;
        else if(p == NULL || q == NULL)
          return false;
        bool c1 = p->val == q->val;
        bool c2 = isSameTree(p->left, q->left);
        bool c3 = isSameTree(p->right, q->right);
        return  c1 && c2 && c3;
    }
};

Solution s;

int main(void)
{
  TreeNode *a = new TreeNode(5);
  a->left = new TreeNode(4);
  a->right = new TreeNode(2);
  a->left->left = new TreeNode(11);
  a->left->right = new TreeNode(7);

  a->right->left = new TreeNode(8);
  a->right->right = new TreeNode(3);

  TreeNode *ab = new TreeNode(5);
  ab->left = new TreeNode(4); 
  ab->right = new TreeNode(2);
  ab->left->left = new TreeNode(11);
  ab->left->right = new TreeNode(8);

  ab->right->left = new TreeNode(8);
  ab->right->right = new TreeNode(3);
  //                 5
  //           4            2  
  //         11  7        8   3
  bool res = s.isSameTree(a, ab);
  printf("%d\n", res);
  int n;
  scanf("%d", &n);
  return 0;}
