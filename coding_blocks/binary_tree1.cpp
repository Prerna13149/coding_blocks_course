#include<iostream>
#include<cmath>
using namespace std;

//Input = 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1;;
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
class pair{
public:
	int height;
	int diameter;
	pair(){

	}
}

node* createTree(){
	int data;
	cin>>data;
	if(data==-1){
		return NULL;
	}
	else{
		node* root = new node(data);
		root->left = createTree();
		root->right = createTree();
		return root;
	}
}
void preorder(node* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
	//return;
}
void inorder(node* root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void postorder(node* root){
	if(root==NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
int countNodes(node* root){
	if(root==NULL){
		return 0;
	}
	return countNodes(root->left) + countNodes(root->right) + 1;//1 for current node and recursion brings count from left and right
}

int countN(node* root, int &count){
	if(root==NULL){
		return 0 ;
	}
	
	count++;
	countN(root->left, count);
	countN(root->right, count);
	return count;
}
int height(node* root){
	if(root == NULL){
		return 0;
	}
	if(root->left == NULL  && root->right == NULL){
		return 1;
	}
	int l_h = height(root->left);
	int r_h = height(root->right);

	return max(l_h, r_h) + 1;
}

int diameter(node* root){
	if(root == NULL){
		return 0;
	}
	int h = height(root->left)+ height(root->right);//double calculation hoing down for height and daimeter
	int left_dia = diameter(root->left);//no need to +1 as it will already be handled by max height
	int right_dia = diameter(root->right);
	int a = max(h, left_dia);
	return max(a, right_dia);
}

int main(int argc, char const *argv[])
{
	node* root = createTree();
	preorder(root);
	cout<<"\n";
	inorder(root);
	cout<<"\n";
	cout<<"postorder: ";
	postorder(root);
	cout<<"\n";
	cout<<"number of nodes: "<<countNodes(root)<<"\n";
	int count=0;
	int res = countN(root, count);
	cout<<res<<"\n";
	int h = height(root);
	cout<<h<<"\n";
	int d = diameter(root);
	cout<<"diameter: "<<d<<"\n";
	return 0;
}