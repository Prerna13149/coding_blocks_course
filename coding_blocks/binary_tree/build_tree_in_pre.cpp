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

node* buildtree(int pre[], int in[], int st, int end, int n){
	if(st>end){
		return NULL;
	}
	static int i = 0;
	int data = pre[i];
	node* root = new node(data);
	int index = -1;
	for (int k = 0; k < n; k++)
	{
		if(in[k]==data){
			index = k;
			break;
		}
		/* code */
	}
	i++;
	root->left = buildtree(pre, in, st, index-1, n);
	root->right = buildtree(pre, in, index+1, end, n);
	return root;

}

// void preorder(node* root){
// 	if(root==NULL){
// 		cout<<"END"<<"\n";
// 		return;
// 	}
	
// 	preorder(root->left);
// 	if(root->left==NULL){
// 		cout<<"END";
// 	}
// 	cout<<root->left<<"=>"<<root->data<<"=>"<<root->right<<"\n";
// 	preorder(root->right);
// 	return;
// }
void preOrder(node* r){
	if(r==NULL){
		return;
	}
	if(r->left==NULL){
		cout<<"END => ";
	}
	else{
		cout<<r->left->data<<" => ";
	}
	cout<<r->data;
	if(r->right==NULL){
		cout<<" <= END\n";
	}
	else{
		cout<<" <= "<<r->right->data<<endl;
	}	
	preOrder(r->left);
	preOrder(r->right);
	return;
}

int main(int argc, char const *argv[])
{
	// int pre[] = {1, 2, 3, 4, 8, 5, 6, 7};
	// int in[] = {3, 2, 8, 4, 1, 6, 7, 5};
	// node* root = buildtree(pre, in, 0, 7, 8);
	// preorder(root);
	int n;
	cin>>n;
	int pre[10000];
	for (int i = 0; i < n; i++)
	{
		cin>>pre[i];
		/* code */
	}
	int m;
	cin>>m;
	int in[10000];
	for (int i = 0; i < m; i++)
	{
		cin>>in[i];
		/* code */
	}
	node* root = buildtree(pre, in, 0, m-1, n);
	preOrder(root);
	return 0;
}