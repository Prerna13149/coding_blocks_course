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


node* create_balanced(int arr[], int st, int end){
	if(st>end){
		return NULL;
	}
	int mid = (st+end)/2;
	node* root = new node(arr[mid]);
	root->left = create_balanced(arr, st, mid-1);
	root->right = create_balanced(arr, mid+1, end);
	return root;
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
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	node* root = create_balanced(arr, 0, 6);
	preorder(root);
	return 0;
}
