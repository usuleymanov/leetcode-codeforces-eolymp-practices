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

void RotateRight(int k)
{
	k=k%len;
	if(k==0) return;
	int shift = len-k-1;
	Node *temp = head;
	for(shift;0<shift;shift--)
		temp = temp->next;
	tail->next = head;
	head = temp->next;
	temp->next = NULL;
	tail = temp;
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
	int n, k, val;
	cin>>n;
	List list;
	for(n;0<n;n--){
		cin>>val;
		list.AddToTail(val);
	}
	while(scanf("%d", &k)==1){
		list.RotateRight(k);
		list.Print();
	}
}
