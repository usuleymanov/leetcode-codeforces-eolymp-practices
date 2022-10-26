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
vector<int> v;

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

void InOrder(void){
	inorder(head);
	cout<<v[0];
	for(int i = 1; i<v.size(); i++)
       	cout<<" "<<v[i];
}

  void inorder(TreeNode *root)
  {
    if (root == NULL) return;
    inorder(root->left);
    v.push_back(root->val);
    inorder(root->right);
  }

TreeNode* invertTree(TreeNode* root) {
        if(root == NULL) return NULL;
        TreeNode *temp = root -> left;
        root -> left = invertTree(root -> right);
        root -> right  = invertTree(temp);
        return root;
    }
    
void InvertTree(void){
	invert(head);
	InOrder();
}

TreeNode* invert(TreeNode *&root){
	if(!root) return NULL;
    TreeNode *temp = root->left;
    root->left  = invert(root->right);
    root->right = invert(temp);
    return root;
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
	tree.InvertTree();
}
