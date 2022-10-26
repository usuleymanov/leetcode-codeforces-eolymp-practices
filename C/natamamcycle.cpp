#include <stdio.h>

class Node
{
public:
  int data;
  Node *next;
  Node() : next(NULL) {};
  Node(int data, Node *next = NULL) : data(data), next(next) {};
};

class List
{
public:
  Node *head, *tail;
  List() : head(NULL), tail(NULL) {};
  void addToTail(int val)
  {
    if (tail != NULL) // list is not empty
    {
      tail->next = new Node(val);
      tail = tail->next;
    }
    else head = tail = new Node(val);
  }
  void PrintForw(Node *node)
  {
    if (node == NULL) return;
    printf("%d ",node->data);
    PrintForw(node->next);
  }
  void Print(void)
  {
    PrintForw(this->head);
    printf("\n");
  }
  void CycleTail(int n)
  {
    Node *temp = head;
    while(n--) temp = temp->next;
    tail->next = temp;
  }
  int hasCycle(void)
  {
    if (!head) return 0;
    Node* p = head;
    Node* q = head;
    while(q->next && q->next->next)
    {
      p = p->next;
      q = q->next->next;
      if (p == q) return 1;
    }
    return 0;
  }
};

int main(void)
{
  List list;
  int i, x, a, b, c, m, n;
  List *b = new List(1);
  b->next = new List(2);
  b->next->next = new List(3);
  b->next->next->next = new List(4);
  b->next->next->next->next = new List(5);
  b->next->next->next->next->next = b->next->next;
  //list.Print();

  if ((n > 0) && (x < m / 2)) list.CycleTail(x % n);

  //printf("%d\n",list.hasCycle());
  return 0;
}
