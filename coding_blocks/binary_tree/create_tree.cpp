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

int convert_to_int(char ch[]){
	int j=0;
	int num=0;
	while(ch[j]!='\0'){
		num = num * pow(10, j) + (ch[j]-'0');
		j++;
	}
	return num;
}

node* createTree_2(){
	int data;
	string entry;
	cin>>data;
	node* root = new node(data);
	cin>>entry;
	if(entry==true){
		root->left = createTree_2();
	}
	else{
		root->left = NULL;
	}
	cin>>entry;
	if(entry==true){
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

void printNodes(node* root, int k, int h, int i){
	if(h>k){
		return;
	}
	if(i==k){
		cout<<root->data<<" ";
		return;
	}
	printNodes(root->left, k, h , i+1);
	printNodes(root->right, k, h, i+1);
	return;

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

void bfs(node* root){
	if(root==NULL){
		return;
	}
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node* temp = q.front();
		cout<<temp->data<<", ";
		q.pop();
		if(temp->left!=NULL){
			q.push(temp->left);
		}
		if(temp->right!=NULL){
			q.push(temp->right);
		}
		
	}
	return;
}
void bfs_newline(node* root){
	if(root==NULL){
		return;
	}
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node* temp = q.front();
		if(temp==NULL){
			cout<<endl;
			q.pop();
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<temp->data<<", ";
			q.pop();
			if(temp->left!=NULL){
				q.push(temp->left);
			}
			if(temp->right!=NULL){
				q.push(temp->right);
			}
		}
		
		
	}
	return;
}
void levelOrder(node* root){
	if(root==NULL){
		return;
	}
	int h = height(root);
	for (int i = 1; i <= h; i++)
	{
		cout<<"level is = "<<i<<": ";
		printhkthlevel(root, i);
		cout<<"\n";
		/* code */
	}
}

void countNodes(node* root, int &count){
	if(root==NULL){
		return;
	}
	count=count+1;
	countNodes(root->left, count);
	countNodes(root->right, count);
	return;
}



// int main(int argc, char const *argv[])
// {
// 	/* code */
// 	node* root = createTree();
// 	preorder(root);
// 	cout<<"\n";
// 	//cout<<height(root)<<"\n";
// 	// levelOrder(root);
// 	//bfs(root);
// 	//bfs_newline(root);
// 	int ct = 0;
// 	countNodes(root, ct);
// 	cout<<ct<<"\n";
// 	int sum = 0;
// 	// sumNodes(root, sum);
// 	// cout<<sum<<"\n";
// 	return 0;
// }

int main(int argc, char const *argv[])
{
	node* root = createTree_2();
	/* code */
	return 0;
}