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
node* createLink2(int n){
	node* head = new node(0);
	node* head_final = head;
	for (int i = 1; i < n ; i++)
	{
		node* temp = new node(n-i);
		(*head).next = temp;
		head = temp;
		/* code */
	}
	return head_final;
}
void insertEnd2(node* &head, node* &tail, int num){
	node* new_node = new node(num);
	if(head==NULL){
		head = new_node;
		tail = new_node;
		return;
	}
	node *temp = head;
	while((*temp).next!=NULL){
		temp = (*temp).next;
	}
	(*temp).next = new_node;
	tail = new_node;
	return;
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
void delete_end(node* &head, node* &tail){
	if(head==NULL){
		return;
	}
	if(head==tail){
		delete head;
		head=NULL;
		tail=NULL;
		return;
	}
	node* temp = head;
	int len = length(head);
	int i=1;
	while(i<(len-1)){
		i++;
		temp = (*temp).next;
	}
	//cout<<(*temp).data<<"\n";
	node* temp2 = (*temp).next;
	tail = temp2; 
	(*temp).next =NULL;
	tail = temp;
	delete temp2;
	return;

}
void insert(node* &head, node* &tail, int pos, int data){
	if(pos==0){
		insertFront(head, tail, data);
	}
	else if(pos>=length(head)){
		insertEnd2(head, tail, data);
	}
	else{
		node* temp = head;
		int ct = 1;
		while(ct<pos){
			temp = (*temp).next;
			ct++;
		}
		node* new_node = new node(data);
		(*new_node).next = (*temp).next;
		(*temp).next = new_node;
	}
	return;
}
void delete_front(node* &head, node* &tail){
	if(head==NULL){
		return;
	}
	if(head==tail){
		head=NULL;
		tail=NULL;
		return;
	}
	node* temp = head;
	head = (*head).next;
	delete temp;
	return;

}
void delete_at_pos(node* &head, node* &tail, int pos){//do it again
	if(pos==0){
		delete_front(head, tail);
		return;
	}
	if(pos==length(head)-1){
		delete_end(head, tail);
		return;
	}
	else{
		node* temp=head;
		//node* prev=head;
		int i=1;
		while(i<pos){
			temp = temp->next;
			i++;
		}
		node* n = (*temp).next;
		(*temp).next = (*n).next;

	}
}

node* search(node* head, int num){
	if(head==NULL){
		return head;
	}
	node* temp = head;
	while(temp!=NULL){
		if(temp->data ==num){
			return temp;
		}
		temp = temp->next;
	}
	return NULL;
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

node* search_rec(node* head, int num){
	if(head==NULL){
		return head;
	}
	node* temp = head;
	if(temp->data ==num){
		return temp;

	}
	else{

		temp = temp->next;
		return search(temp, num);
	}
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
void reverse(node* &head){
	if(head==NULL || head->next==NULL){
		return;
	}
	node* curr= head;
	node* prev=NULL;
	node* n ;//= head->next;
	while(curr!=NULL){
		n = curr->next;
		curr->next = prev;
		prev = curr;
		curr = n;
	}
	head = prev;
	return;
}
void cycleBreak(node* &head){
	node* s = head;
	node* f = head->next;
	while(1){
		// if(s==NULL||f==NULL||f->next==NULL||s->next==NULL){
		// 	return;
		// }
		if(s==f){
			break;
		}
		s = s->next;
		f = f->next->next;
	}
	node* prev =head;
	while(prev->next!=f){
		prev = prev->next;
	}
	s = head;
	while(s!=f){
		s=s->next;
		f=f->next;
		prev = prev->next;
	}
	prev->next = NULL;
	return;

}
void createCycle(node* &head){
	node* temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = head->next->next;
}
bool detectCycle(node* head){
	if(head==NULL||head->next!=NULL){
		return false;
	}
	node* s = head;
	node* f = head->next;
	while(1){
		if(s==NULL||f==NULL||f->next==NULL||s->next==NULL){
			return false;
		}
		if(s==f){
			return true;
		}
		s = s->next;
		f = f->next->next;
	}
	return false;
}

int main(int argc, char const *argv[])
{

	//node* tail = NULL;
	node* head2 = new node(5);
	node* node2 = new node(7);
	node* tail = new node(6);
	(*head2).next = node2;
	(*node2).next = tail;

	printLink(head2);
	cout<<"len "<<length(head2)<<"\n";
	// int data;
	// int position;
	// cin>>data>>position;
	// insert(head2, tail, position, data);
	// printLink(head2);

	// delete_front(head2, tail);
	// cout<<"\n";
	// printLink(head2);
	//delete_end(head2, tail);
	//cout<<"\n";
	//printLink(head2);
	//delete_at_pos(head2, tail, 1);
	//printLink(head2);
	node* head3 = createLink(8);
	node* head4 = createLink2(6);
	printLink(head3);
	cout<<"\n";
	printLink(head4);
	int data;
	// cin>>data;
	// node *n = search_rec(head3, data);
	// if(n==NULL){
	// 	cout<<"Not found"<<"\n";
	// }
	// else{
	// 	cout<<n->data<<"\n";
	// }

	/* Finding mid point of a linked list*/
	node* mid = mid_point(head3);
	cout<<"\n";
	if(mid==NULL){
		cout<<"No mid"<<"\n";
	}
	else{
		cout<<"Mid is: "<<mid->data<<"\n";
	}
	// node* new_head = merge(head3, head4);
	// cout<<"\n";
	// printLink(new_head);
	// cout<<"Array to sort:"<<"\n";
	// printLink(head4);
	// cout<<"\n";
	// node* head5 = mergeSort(head4);
	// printLink(head5);
	// cout<<"\n";

	cout<<"Array to sort:"<<"\n";
	printLink(head4);
	cout<<"\n";
	
	int l = length(head4);
	// for (int i = 0; i < l; i++)
	// {
	// 	/* code */
	// }
	// bubbleSort(head4);
	// printLink(head4);
	// reverse(head4);
	// printLink(head4);
	createCycle(head3);
	//printLink(head3);
	// bool res = detectCycle(head4);
	// if(res){
	// 	cout<<"True"<<"\n";
	// }
	// else{
	// 	cout<<"No cycle"<<"\n";
	// }
	cycleBreak(head3);
	printLink(head3);

	return 0;
}