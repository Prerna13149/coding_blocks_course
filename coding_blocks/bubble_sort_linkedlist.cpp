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
void bubble_sort_recur(node* &head, node* &prev, int len, int &step){
	if(step==(len-1)){
		return;
	}
	if(head==NULL || head->next==NULL){
		return;
	}
	node* n = head->next;
	node* curr = head;
	//node* prev = NULL;
	if(curr->data > n->data){//swapping
		//2 cases - head change and no head change
		if(step==0){
			head->next = n->next;
			n->next = curr;
			head = n;
			prev = n;
			}
		else{
			curr->next = n->next;
			n->next = curr;
			prev->next = n;
			prev = n;
		}
	}
	else{//no swapping
		prev = curr;
		curr = curr->next;
	}
	step++;
	bubble_sort_recur(curr, prev, len, step);
	return; 
}

void bubbleSort(node* &head){
	int len = length(head);
	node* curr = head;

	node* next = curr->next;
	node* prev =NULL;
	node*n;

	for (int i = 0; i <= len-1; i++)
	{
		curr=head;
		prev=NULL;
		while(curr && curr->next!=NULL){
			n = curr->next;
			if(curr->data > n->data){//swapping
				//2 cases - head change and no head change
				if(prev==NULL){
					curr->next = n->next;
					n->next = curr;
					head = n;
					prev = n;
				}
				else{
					curr->next = n->next;
					n->next = curr;
					prev->next = n;
					prev = n;
				}
			}
			else{//no swapping
				prev = curr;
				curr = curr->next;
			}
		}

		/* code */
	}

}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int i=0;
	int num;
	node* head = NULL;
	node* prev = NULL;
	while(i<n){
		cin>>num;
		node* new_node = new node(num);
		if(i==0){
			head = new_node;
			prev = new_node;
		}
		else{
			prev->next = new_node;
			prev = new_node;
		}

		i++;
	}
	prev =NULL;
	int len = length(head);
	int step=0;
	for (int i = 0; i <= len-1; i++)
	{
		prev=NULL;
		step=0;
		bubble_sort_recur(head, prev, len, step);
		/* code */
	}
	
	// bubbleSort(head);
	printLink(head);
	return 0;
}