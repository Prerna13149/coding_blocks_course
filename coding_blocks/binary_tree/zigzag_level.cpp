/*
LEVEL ORDER ( ZIGZAG , BINARY TREE)
Given a binary tree. Print the zig zag order i.e print level 1 from left to right, level 2 from right to left and so on. This means odd levels should get printed from left to right and even levels should be printed from right to left. Each level should be printed at a new line.


Input Format:
Enter the values of all the nodes in the binary tree in pre-order format where true suggest the node exists and false suggests it is NULL

Constraints:
None

Output Format:
Display the values in zigzag level order in which each value is separated by a space

Sample Input:
10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
Sample Output:
10 30 20 40 50 60 73 
Time Limit: 4 sec


*/
#include <iostream>
#include <queue>
#include <cmath>
#include <cstring>
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

node* createTree_2(){
	int data;
	string entry;
	cin>>data;
	node* root = new node(data);
	cin>>entry;
	if(entry=="true"){
		root->left = createTree_2();
	}
	else{
		root->left = NULL;
	}
	cin>>entry;
	if(entry=="true"){
		root->right = createTree_2();
	}
	else{
		root->right = NULL;
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
}

int height(node* root){
	if(root==NULL){
		return 0;
	}
	int left = 1 + height(root->left);
	int right = 1 + height(root->right);
	return max(left, right);
}

void printhkthlevel_odd(node* root, int k){
	if(root==NULL){
		return;
	}
	if(k==1){
		cout<<root->data<<" ";
		return;
	}
	printhkthlevel_odd(root->left, k-1);
	printhkthlevel_odd(root->right, k-1);
	return;

}
void printhkthlevel_even(node* root, int k){
	if(root==NULL){
		return;
	}
	if(k==1){
		cout<<root->data<<" ";
		return;
	}
	printhkthlevel_even(root->right, k-1);
	printhkthlevel_even(root->left, k-1);
	return;

}

void levelOrder(node* root){
	if(root==NULL){
		return;
	}
	int h = height(root);
	for (int i = 1; i <= h; i++)
	{
		//cout<<"level is = "<<i<<": ";
		if(i%2==0){
			printhkthlevel_even(root, i);
		}
		else{
			printhkthlevel_odd(root, i);
		}
		
		//cout<<"\n";
		/* code */
	}
}

int main(int argc, char const *argv[])
{
	node* root = createTree_2();
	levelOrder(root);
	/* code */
	return 0;
}