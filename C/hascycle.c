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
  bool hasCycle(ListNode *head)
  {
    if (!head) return false;
    ListNode* p = head;
    ListNode* q = head;
    while(q->next && q->next->next)
    {
      p = p->next;
      q = q->next->next;
      if (p == q) return true;
    }
    return false;
  }
};

int main(void)
{
  ListNode *a = new ListNode(10);
  a->next = new ListNode(11);
  a->next->next = new ListNode(12);
  a->next->next->next = new ListNode(13);
  a->next->next->next->next = new ListNode(50);
  a->next->next->next->next->next = new ListNode(60);
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
  bool res = s.hasCycle(a);
  printf("%d\n",res);

  res = s.hasCycle(b);
  printf("%d\n",res);
  getch();
  return 0;
}
