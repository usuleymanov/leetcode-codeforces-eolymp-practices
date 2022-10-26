#include <stdio.h>
struct TreeNode{
  int val;
  TreeNode* next;
  TreeNode(int x) : val(x), next(NULL) {} 
};
class Solution{
public:
  void deleteNode(TreeNode* head){
    if(head->next == NULL)
      return;
    else {
    head->val = (head->next)->val;
    TreeNode* tmp = head->next;
    head->next = head->next->next;
    delete tmp;
  }
  }
};
int main(){
  Solution s;
  TreeNode* a = new TreeNode(1);
  a->next = new TreeNode(2);
  a->next->next = new TreeNode(3);
  a->next->next->next = new TreeNode(4);
  s.deleteNode(a->next->next);
  while(a->next != NULL){
    printf("%d ", a->val);
    a = a->next;
  }
  printf("%d ", a->val);
  int m;
  scanf("%d", &m);
  return 0; 
}
