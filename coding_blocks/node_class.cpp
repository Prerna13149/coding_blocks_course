#include<iostream>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int num){
		data = num;
		next = NULL;
	}
};

void printLink(node* head){
	if(head==NULL){
		return;
	}
	node* temp = head;
	while(temp!=NULL){
		cout<<(*temp).data<<" ";
		temp = (*temp).next;
	}
}
void insertFront(node* &head, node* &tail, int num){
	node* new_node = new node(num);
	if(head==NULL){
		head = new_node;
		tail = new_node;
	}
	else{
		(*new_node).next = head;
		head = new_node;
	}
	return;

}
node* createLink(int n){
	node* head = new node(0);
	node* head_final = head;
	for (int i = 1; i < n ; i++)
	{
		node* temp = new node(i);
		(*head).next = temp;
		head = temp;
		/* code */
	}
	return head_final;
}
node* insertEnd(node* head, node* tail, int num){
	node* new_node = new node(num);
	if(head==NULL){
		head = new_node;
		tail = new_node;
		return head;
	}
	node *temp = head;
	while((*temp).next!=NULL){
		temp = (*temp).next;
	}
	(*temp).next = new_node;
	tail = new_node;
	return head;
}

int length(node* head){
	if(head==NULL){
		return 0;
	}
	int len = 0;
	while(head!=NULL){
		len++;
		head = (*head).next;
	}
	return len;
}
int main(int argc, char const *argv[])
{
	node A(3);
	cout<<A.data<<"\n";

	// node* head = NULL;
	// node* tail = NULL;
	node* head = new node(5);
	node* tail = new node(6);
	(*head).next = tail;
	// int num;
	// cin>>num;
	// insertFront(head, tail, num);
	// printLink(head);
	// cout<<"\n";
	
	// cout<<"\n";
	// node* head3 = insertEnd(head, tail, 12);
	// printLink(head3);
	//cout<<(*B).data<<"\n";

	node* head2 = createLink(5);
	printLink(head2);
	cout<<"len "<<length(head2)<<"\n";


	return 0;
}