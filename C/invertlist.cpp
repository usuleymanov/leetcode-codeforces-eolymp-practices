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
  void func(ListNode *head){
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
    head = first;
    int i;
    for(i = 0; i < l - 1; i++){
      second = second->next;
      head = head->next;
    }
    second = second->next;
    head->next = NULL;
    second = invert(second);
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
            
  ListNode* invert(ListNode *head)
  {
    if(head == NULL) return NULL;
    ListNode* prev = NULL;
    ListNode* foll = head->next;
    while(foll != NULL){
      head->next = prev;
      prev = head;
      head = foll;
      foll = foll->next;         
    }
    head->next = prev;
    return head;
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
  //b->next->next->next->next->next = b->next->next;
  // 1 -> 2 -> 3 -> 4 -> 5
  //           <------- <-  

  Solution s;
  s.func(b);
  ListNode* res = b;
  while( res != NULL){
    printf("%d ", res->val);
    res = res->next;
  }
  int m;
  scanf("%d", &m);

  return 0;
}
