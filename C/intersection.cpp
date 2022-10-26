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
  ListNode* intersection(ListNode* head1, ListNode* head2){
    if(head1 == NULL || head2 == NULL) return NULL;
    ListNode* t1 = head1;
    ListNode* t2 = head2;
    
    int l1 = 1;
    int l2 = 1;
    while(t1->next != NULL){
      l1++;
      t1 = t1->next;
    }
    t2 = head2;
    while(t2->next != NULL){
      l2++;
      t2 = t2->next;
    }
    if(t1 != t2)
      return NULL;
    if(l1 > l2){
      int i;
      for(i = 0; i < l1 - l2; i++)
        head1 = head1->next;
      while(head1 != head2){
        head1 = head1->next;
        head2 = head2->next;
      }
      return head1;
    }
    else {
      int i;
      for(i = 0; i < l2 - l1; i++)
        head2 = head2->next;
      while(head1 != head2){
        head1 = head1->next;
        head2 = head2->next;
      }
      return head1;
    }
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
  b->next->next->next = a->next->next->next;
 // b->next->next->next->next = new ListNode(5);
 // b->next->next->next->next->next = b->next->next;
  // 1 -> 2 -> 3 |  

  Solution s;
  ListNode* res = s.intersection(b, a);
  printf("%d\n",res->val);

  //res = s.hasCycle(b);
 // printf("%d\n",res);
  int m;
  scanf("%d", &m);
  return 0;
}
