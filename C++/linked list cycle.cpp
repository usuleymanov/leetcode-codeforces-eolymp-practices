#include <bits/stdc++.h>
using namespace std;

int p,a,b,c,m,n,i = 0, temp;

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

List() : head(NULL), tail(NULL) {};

void addToTail(int val)
{
	if(!head)
	head = tail = new Node(val);
	else {
        tail->next = new Node(val);
     	tail= tail->next;
	}
}

int hasCycle(void){
	
    	Node *node_temp = head;
		if(temp < m/2){
			for(int j = 0; j<temp%n; j++)
			    node_temp = node_temp->next;
			tail->next = node_temp;	 
		}
		
	Node *slow = head, *fast = head;
	while(fast->next && fast->next->next){
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast)
		return 1;
	}
	return 0;
}
};

int xi(int xi){
	return (a*xi*xi + b*xi + c)%m;
}

int main() {
	cin>>p>>a>>b>>c>>m>>n;
	List list;
	temp = p;
	for(i;i<n;i++){
		list.addToTail(temp);
		temp = xi(temp);	
	}
	cout<<list.hasCycle();
}
