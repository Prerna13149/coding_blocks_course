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

node* buildtree(int post[], int ino[], int st, int end, int m){
	if(st>end || st<0){
		return NULL;
	}
	// static int i = end;  not needed as I am sending last index of postorder myself
	int data = post[m];
	node* root = new node(data);
	int index = -1;
	for (int k = st; k <=end; k++)
	{
		if(ino[k]==data){
			index = k;
			break;
		}
		/* code */
	}
    if(index==-1){
        return buildtree(post,ino,st,end,m-1);
    }
	// i--;
	root->left = buildtree(post, ino, st, index-1, m-1);
	root->right = buildtree(post, ino, index+1, end, m-1);
	return root;
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
	int test;
	cin>>test;
	int n,m;
	while(test--){
		cin>>n;
		int post[10000];
		int ino[10000];
		for (int i = 0; i < n; i++)
		{
			cin>>ino[i];
			/* code */
		}
		m = n;
		for (int k = 0; k < m; k++)
		{
			cin>>post[k];
			
			/* code */
		}
		node* root = buildtree(post, ino, 0, n-1, n-1);// giving m-1 the last index for postorder tree
		preorder(root);
	}
	return 0;
}