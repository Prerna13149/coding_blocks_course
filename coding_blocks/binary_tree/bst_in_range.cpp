/*
PRINT BST KEYS IN THE GIVEN RANGE
You are given an array of integers. First of all , You have to form a binary search tree from given integers. Now you have provided two integers k1 and k2. You have to print all nodes of BST within the range k1 and k2 (including k1 and k2).


Input Format:
First line contains integer t as number of test cases. Each test case contains three lines. First line contains an integer n which is length of the array and second line contains n space separated integer. Third line contains the value of k1 and k2.

Constraints:
1 < t < 20
1 < n < 50

Output Format:
For each test case you have to print preorder traversal of the tree first and then print all nodes within the range k1 and k2 (inclusive).

Sample Input:
1
5
4 3 2 5 6
3 5
Sample Output:
# Preorder : 4 3 2 5 6 
# Nodes within range are : 3 4 5 
*/

#include <iostream>
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
node* buildbst(int n, int i){
	node* root = NULL;
	while(i<n){
		int num;
		cin>>num;
		root = insertinBST(root, num);
		i++;
	}
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
void print_in_range(node* root, int k1, int k2){
	if(root==NULL){
		return;
	}
	if(root->data >=k1 && root->data<=k2){
		cout<<root->data<<" ";
	}
	print_in_range(root->left, k1, k2);
	print_in_range(root->right, k1, k2);
	return;

}
int main(int argc, char const *argv[])
{
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		node* root = buildbst(n, 0);
		cout<<"# Preorder : ";
		preorder(root);
		int k1, k2;
		cin>>k1>>k2;
		cout<<"# Nodes within range are : ";
		print_in_range(root, k1, k2);
	}
	/* code */
	return 0;
}