#include <iostream>
#include <climits>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;
	node(int n){
		data = n;
		left = NULL;
		right = NULL;
	}
};

node* insertinBST(node* root, int d){
	if(root==NULL){
		return new node(d);
		//return root;
	}
	else if(root->data <= d){
		root->right = insertinBST(root->right, d);
	}
	else{
		root->left = insertinBST(root->left, d);
	}
	return root;
}

node* delete_call(node* root, int key){
	if(root==NULL){
		return root;
	}
	else if(root->data > key){
		root->left = delete_call(root->left, key);
	}
	else if(root->data == key){
		if(root->left==NULL && root->right==NULL){
			delete root;
			return NULL;
		}
		else if(root->left==NULL){
			node* temp = root->right;
			delete root;
			return temp;
		}
		else if(root->right==NULL){
			node* temp = root->left;
			delete root;
			return temp;
		}
		else{//replace with min element in right subtree
			node* replace = root->right;
			while(replace->left!=NULL){
				replace = replace -> left;
			}
			root->data = replace->data;//replace the min value with the root value
			root->right = delete_call(root->right, replace->data);
			return root;
		}
	}
	else{
		root->right = delete_call(root->right, key);
	}
	return root;
}

bool searchBST(node* root, int key){
	if(root==NULL){
		return false;
	}
	if(root->data == key){
		return true;
	}
	if(key < root->data){
		return searchBST(root->left, key);
	}
	else{
		return searchBST(root->right, key);
	}
}
node* buildbst(){
	node* root=NULL;
	int n;
	cin>>n;
	while(n!=-1){
		root = insertinBST(root, n);
		cin>>n;
	}
	return root;
}

bool isBst(node* root, int minV = INT_MIN, int maxV=INT_MIN){
	if(root==NULL){
		return true;
	}
	if(root->data >= minV && root->data <= maxV && isBst(root->left, minV, root->data) && isBst(root->right, root->data, maxV)){
		return true;
	}
	return false;
}
void preorder(node* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
	return;
}
int main(int argc, char const *argv[])
{
	node* root = buildbst();
	preorder(root);
	// int s;
	// cin>>s;
	// root = delete_call(root, s);
	// preorder(root);
	/* code */
	if(isBst(root)){
		cout<<"It is a BST"<<"\n";
	}
	else{
		cout<<"Not bst"<<"\n";
	}
	return 0;
}