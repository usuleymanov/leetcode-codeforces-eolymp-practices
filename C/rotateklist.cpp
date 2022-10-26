#include <stdio.h>

struct ListNode 
{
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
  ListNode* rotateRight(ListNode* head, int k){
    ListNode* temp = head;
    int l = 1;
    while(temp->next != NULL){
      l++;
      temp = temp->next;
    }
    temp->next = head;
    int i;
    for( i = 0; i < l - k%l; i++){
      temp = temp->next;
      head = head->next;
      }
    temp->next = NULL;
    return head;
  }
};

int main(void)
{
  ListNode *a = new ListNode(1);
  a->next = new ListNode(2);
  a->next->next = new ListNode(3);
  a->next->next->next = new ListNode(4);
  a->next->next->next->next = new ListNode(5);
  //a->next->next->next->next->next = new ListNode(60);
  // 10 -> 11 -> 12 -> 13 -> 50 -> 60

  ListNode *b = new ListNode(1);
  b->next = new ListNode(2);
  b->next->next = new ListNode(3);
  b->next->next->next = new ListNode(4);
  b->next->next->next->next = new ListNode(5);
  b->next->next->next->next->next = b->next->next;
  // 1 -> 2 -> 3 -> 4 -> 5
  //           <------- <-  
  Solution s;
  int m;
  ListNode* res = s.rotateRight(a, 2);
  while( res->next != NULL){
  printf("%d\n",res->val);
  res = res->next;
}
  printf("%d\n",res->val);
  scanf("%d", &m);

  return 0;
}
