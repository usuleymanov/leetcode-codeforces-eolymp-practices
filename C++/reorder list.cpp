#include <bits/stdc++.h>
using namespace std;


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
int len = 1;

List() : head(NULL), tail(NULL) {};

void AddToTail(int val)
{
	if(!head)
	head = tail = new Node(val);
	else {
        tail->next = new Node(val);
     	tail= tail->next;
     	len++;
	}
}

void ReorderList(void){
	if(!head) return;
    	Node *head1 = head, *temp = head, *temp1, *head2 = head;
		//brings ListNode temp to the right position
		for(int i=0; i<len/2; i++)
		    temp=temp->next;
		//algorithm
		int cnt = len/2;
		int iter = (len%2==0)? cnt-1 : cnt;
		
		while(cnt> 0){
			head1 = head2;
			head2 = head2->next;
			
			temp1 = temp;
			for(int i=0; i<iter;i++)
			temp1=temp1->next;
			
			head1->next = temp1;
			temp1->next=head2;
		
			cnt--; iter--;
			if(cnt == 0)
			   temp->next=NULL;
			
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

};

int main(){
	int n, val;
	cin>>n;
	List list;
	for(n;0<n;n--){
		cin>>val;
		list.AddToTail(val);
	}
	list.ReorderList();
	list.Print();
}
