#include <iostream>
#include <queue>
#include <cstdlib>

using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;
	node(int num){
		data = num;
		left = NULL;
		right = NULL;
	}
};


node* createTree(){
	int n;
	cin>>n;
	if(n==-1){
		return NULL;
	}
	node* root = new node(n);
	root->left = createTree();
	root->right = createTree();
	return root;

}

node* create_tree(){
	int data;
	string entry;
	cin>>data;
	node* root = new node(data);
	cin>>entry;
	if(entry=="true"){
		root->left = create_tree();
	}
	else{
		root->left = NULL;
	}
	cin>>entry;
	if(entry=="true"){
		root->right = create_tree();
	}
	else{
		root->right = NULL;
	}
	return root;
}

int height(node* root){
	if(root==NULL){
		return 0;
	}
	int l = 1 +  height(root->left);
	int r = 1 + height(root->right);
	return max(l, r);
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
bool isBalanced(node* root){
	if(root==NULL){
		return true;
	}
	if(root->left==NULL && root->right==NULL){
		return 1;
	}
	int l = height(root->left);
	int r = height(root->right);
	if(abs(l-r)<=1){
		return (isBalanced(root->left) && isBalanced(root->right));
	}
	return false;
}
// int main(int argc, char const *argv[])
// {
// 	/* code */
// 	node* root = createTree();
// 	preorder(root);
// 	cout<<"\n";
// 	if(isBalanced(root)){
// 		cout<<"Balanced"<<"\n";
// 	}
// 	else{
// 		cout<<"Not balanced"<<"\n";
// 	}
// 	return 0;
// }

int main(int argc, char const *argv[])
{
	node* root = create_tree();
	if(isBalanced(root)){
		cout<<"true"<<"\n";
	}
	else{
		cout<<"false"<<"\n";
	}
	/* code */
	return 0;
}