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

node* mid_point(node*head){
	if(head==NULL){
		return head;
	}
	node* slow=head;
	node* fast = head->next;
	while(fast!=NULL && fast->next!=NULL){
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;

}

node* merge(node* head1, node* head2){
	if(head1==NULL){
		return head2;
	}
	else if(head2==NULL){
		return head1;
	}
	else{
		node* temp;
		if(head1->data < head2->data){
			temp = head1;
			temp->next = merge(head1->next, head2);
		}
		else{
			temp = head2;
			temp->next = merge(head1, head2->next);
		}
		return temp;
	}

}
node* mergeSort(node* head){
	if(head==NULL){
		return head;
	}
	if(head->next==NULL){//one element left
		return head;
	}
	else{
		node* mid = mid_point(head);
		node* head2 = mid->next;
		mid->next = NULL;
		//mergeSort(head);
		node* temp1 = mergeSort(head);
		node* temp2 = mergeSort(head2);
		node* res = merge(temp1, temp2);
		return res;
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
		node* temp = new node(num);
		if(i==0){
			head = temp;
			prev = head;
		}
		else{
			prev->next = temp;
			prev = temp;
		}
		i++;
	}
	node* res = mergeSort(head);
	printLink(res);
	return 0;
}