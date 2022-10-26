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

 bool SameTree(TreeNode* root, TreeNode* grass) {
        if (root == NULL && grass == NULL) return true;
        else if(root ==NULL || grass == NULL) return false;
        return (root->val == grass->val)&&SameTree(root->right, grass->right)&&SameTree(root->left, grass->left);
    }

int IsSameTree(Tree *p){
	return SameTree(head,p->head);
}

};

int main(){
	int n,m, val;
	Tree *tree = new Tree(), *grass = new Tree();
	cin>>n;
	for(int i = n;0<i;i--){
		cin>>val;
		tree->Insert(val);
	}
	cin>>m;
	if(n != m) {
		cout<<0;
		return 0;
	}
	for(m;0<m;m--){
		cin>>val;
		grass->Insert(val);
	}
	cout<<tree->IsSameTree(grass)<<endl;
}
