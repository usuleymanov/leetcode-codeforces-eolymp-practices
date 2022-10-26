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
  void reorderList(ListNode* head) {
    if(head == NULL) return;
    int l = 1;
    ListNode* first = head;
    while(head->next != NULL){
    l++;
    head = head->next;
    }
    if(l % 2 == 1)
      l = l / 2 + 1;
    else
      l = l / 2;
    ListNode* second = first;
    int i;
    for(i = 0; i < l - 1; i++)
      second = second->next;
    head = second;
    second = second->next;
    head->next = NULL;
    ListNode* prev = NULL;
    ListNode* foll = second->next;
    while(foll != NULL){
      second->next = prev;
      prev = second;
      second = foll;
      foll = foll->next;         
    }
    second->next = prev;
    head = first;
    ListNode* ft = first->next;
    ListNode* st = second->next;
    while(ft != NULL)
    {
      first->next = second;
      first->next->next = ft;
      second = st;
      first = ft;
      ft = ft->next;
      if(st != NULL)
        st = st->next;
    }
    first->next = second;
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
  s.reorderList(a);
  while(a!=NULL){
  printf("%d ", a->val);
  a = a->next;
  }
  int m;
  scanf("%d", &m);
  return 0;
}
