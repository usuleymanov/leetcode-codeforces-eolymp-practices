#include <bits/stdc++.h>
using namespace std;

class TreeNode{
public:

int val;
TreeNode *left;
TreeNode *right;

TreeNode(int x) : val(x), left(NULL), right(NULL) {}

};

class Tree{
public:

TreeNode *head;
bool flag;

Tree() : head(NULL) {};

void Insert(int val){
	insert(head, val);
}

void insert(TreeNode *&root, int val){
	if(!root) root = new TreeNode(val);
	else{
		if(val < root->val) insert(root->left, val);
		else insert(root->right, val);
	}
}

  int IsBalanced(void) 
  {
    flag = true;
    balanced(head);
    return flag;
  }
    
  int balanced(TreeNode  *&root) 
  {
    if(root == NULL) return 0;
    int Left = balanced(root->left);
    int Right = balanced(root->right);
    if (abs(Left - Right) > 1) flag = false; 
    return max(Left,Right) + 1;        
  }

};

int main(){
	Tree tree;
	int n, val;
	cin>>n;
	for(n;0<n;n--){
		cin>>val;
		tree.Insert(val);
	}
	cout<<tree.IsBalanced()<<endl;
}
