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

int MinDepth(void){
	return depth(head);
}

    int depth(TreeNode* root) {
        if(!root) return 0;
    int Left = depth(root->left);
    int Right = depth(root->right);
	if(root->right && root->left) 
	     return min(Left, Right) + 1;
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
	cout<<tree.MinDepth()<<endl;
}
