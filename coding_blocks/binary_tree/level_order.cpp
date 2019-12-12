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

void printhkthlevel(node* root, int k){
	if(root==NULL){
		return;
	}
	if(k==1){
		cout<<root->data<<" ";
		return;
	}
	printhkthlevel(root->left, k-1);
	printhkthlevel(root->right, k-1);
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
		printhkthlevel(root, i);
		cout<<"\n";
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