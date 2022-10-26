#include <bits/stdc++.h>
using namespace std;

class Node{
public:
	
int data;
Node *next;

Node() : next(NULL) {};
Node(int data, Node *next = NULL) : data(data), next(next) {};
};

class List{
public:

Node *head, *tail;

List() : head(NULL), tail(NULL) {}

void addToTail(int val)
{
	if(!head)
	head = tail = new Node(val);
	else {
        tail->next = new Node(val);
     	tail= tail->next;
	}
}

void Print()
{
	Node *temp = head;
	cout<<temp->data;
	while(temp->next != NULL){
		cout<<" "<<temp->next->data;
		temp = temp->next;
	}
	cout<<endl;
}

void PrintReverse(){
	Node *head2 = head;
    head2 = head2->next;
    head->next = NULL;
    while(head2!= NULL){
          Node *temp = head2->next;
          head2->next=head;
          head = head2;
          head2 = temp;
      }
      Print();
}
}; 

int main() {
	int n, val;
	cin>>n;
	List list;
	for(n;0<n;n--)
	{
		cin>>val;
		list.addToTail(val);
	}
	cout<<n<<endl;
	list.Print();
	list.PrintReverse();
}
