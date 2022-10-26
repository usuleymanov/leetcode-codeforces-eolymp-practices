#include <bits/stdc++.h>
using namespace std;

class TreeNode{
public:

int key;
int val;

TreeNode *left;
TreeNode *right;

TreeNode(int key, int val) : key(key), val(val), left(NULL), right(NULL) {}

};

class Tree{
public:

TreeNode *head;

Tree() : head(NULL) {};

void insert(TreeNode *root, int key, int val){
	if(!root) root = new TreeNode(key,val);
	else{
		if(key < root->key) insert(root->left, key, val);
		else insert(root->right, key, val);
	}
}

void Insert(int key, int val){
	insert(head,key,val);
}

bool symmetric(TreeNode* left, TreeNode* right)
  {
    if(!left && !right)
      return true;
    else if(!left || !right)
      return false;
     bool first = left->val == right->val;
     bool second = symmetric(left->left, right->right);
     bool third = symmetric(left->right, right->left);
     return first && second && third;
  }
  
int IsSymmetric(){
    return symmetric(head->left,head->right);
}
};

int main(){
	int n, val;
	Tree *tree = new Tree();
	cin>>n;
    int key[n];
	for(int i = 0;i<n;i++)
	    cin>>key[i];
	for(int i = 0;i<n;i++){
		cin>>val;
		tree->Insert(key[i], val);
	}
	cout<<tree->IsSymmetric()<<endl;
}
