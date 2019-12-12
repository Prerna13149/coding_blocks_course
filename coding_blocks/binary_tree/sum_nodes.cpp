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

void sumNodes(node* root, int &sum){
	if(root==NULL){
		return;
	}
	sum = sum +  root->data;
	sumNodes(root->left, sum);
	sumNodes(root->right, sum);
	return;
}
int main(int argc, char const *argv[])
{
	node* root = create_tree();
	int sum = 0;
	sumNodes(root, sum);
	cout<<sum<<"\n";
	/* code */
	return 0;
}