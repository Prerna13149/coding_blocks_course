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

class Linkedlist{
public:
	node* head;
	node* tail;
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

Linkedlist flatten(node* root){
	Linkedlist l;
	if(root==NULL){
		l.head = l.tail = NULL;
		return l;
	}
	else if(root->left==NULL && root->right==NULL){
		l.head = l.tail = root;
		return l;
	}
	else if(root->left==NULL){
		Linkedlist rightL = flatten(root->right);
		root->right = rightL.head;
		l.head  = root;
		l.tail = rightL.tail;
		return l;

	}
	else if(root->right==NULL){
		Linkedlist leftL = flatten(root->left);
		leftL.tail->right = root;
		l.tail = root;
		l.head = leftL.head;
		return l;

	}
	else{
		Linkedlist leftL = flatten(root->left);
		Linkedlist rightL = flatten(root->right);
		leftL.tail->right = root;
		root->right = rightL.head;
		l.head = leftL.head;
		l.tail = rightL.tail;
		return l;
	}


}
void preorder(node* root){
	if(root==NULL){
		//cout<<"END"<<"\n";
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
	Linkedlist l = flatten(root);
	cout<<"Got Linkedlist"<<"\n";
	node* temp = l.head;
	while(temp!=NULL){
		cout<<temp->data<<"-->";
		temp = temp->right;
	}
	return 0;
}