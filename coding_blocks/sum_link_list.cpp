#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node* next;

	node(int d)
	{
		data=d;
		next=NULL;
	}
};
void print(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}

int length(node* head)
{
	int len=0;
	while(head!=NULL)
	{
		len++;
		head=head->next;
	}

	return len;
}

void reverse(node*  &head){
  if(head==NULL){
    return;
  }
  if(head->next==NULL){
    return;
  }
  node* prev = NULL;
  node* curr = head;
  //node* n = head->next;
  while(curr!=NULL){
    node* temp = curr->next;
    curr->next=prev;
    prev = curr;
    curr = temp;
  }
  head = prev;
  
}

void add(node* head1, node* head2, int n1, int n2){
	if(head1==NULL && head2==NULL){
		//cout<<0<<"\n";
		return;
	}
	// if(head1!=NULL){
	// 	reverse(head1);
	// 	print(head2);
	// }
	// if(head2==NULL){
	// 	reverse(head2);
	// 	print(head2);
	// }
	node* prev1 = NULL;
	node* prev2 = NULL;
	node* temp1 = head1;
	node* temp2 = head2;
	node* temp=NULL;
	node* prev =NULL;
	node* head = NULL;
	int i = 0;
	//node* head3 = NULL;
	int carry=0;
	while(temp1!=NULL && temp2!=NULL){
		int sum = temp1->data + temp2->data + carry;
		if(sum<10){
			//cout<<sum<<" ";
			node* n = new node(sum);
			if(i==0){
			    head = n;
			    prev = n;
			    i++;
			}
			else{
				prev->next = n;
				prev = n;
			}
			carry = 0;
		}
		else{
			//cout<<sum%10<<" ";
			node* n = new node(sum%10);
			if(i==0){
			    head = n;
			    prev = n;
			    i++;
			}
			else{
				prev->next = n;
				prev = n;
			}
			carry = sum/10;
		}
		temp1 = temp1->next;
		temp2 = temp2->next;
	}
	while(temp1!=NULL){
		//cout<<temp1->data<<" ";
		node* n = new node(temp1->data);
		prev->next = n;
		prev = n;
		temp1=temp1->next;
	}
	while(temp2!=NULL){
		//cout<<temp2->data<<" ";
		node* n = new node(temp2->data);
		prev->next = n;
		prev = n;
		temp2 = temp2->next;
	}
	if(temp1==NULL && temp2==NULL && carry>0){
		node* n = new node(carry);
		prev->next = n;
		prev = n;
		//cout<<carry<<"\n";
	}
	reverse(head);
	print(head);
	return;
}


int main(int argc, char const *argv[])
{
	int n1;
	int n2;
	cin>>n1;
	cin>>n2;
	int i=0;
	node* head1 = NULL;
	node* prev1 = NULL;
	node* head2 = NULL;
	node* prev2 = NULL;
	int num;
	while(i<n1){
		cin>>num;
		node *n = new node(num);
		if(i==0){
			head1 = n;
			prev1 = n;
		}
		else{
			prev1->next = n;
			prev1 = n;
		}
		i++;
	}
	i=0;
	while(i<n2){
		cin>>num;
		node *n = new node(num);
		if(i==0){
			head2 = n;
			prev2 = n;
		}
		else{
			prev2->next = n;
			prev2 = n;
		}
		i++;
	}
	reverse(head1);
	reverse(head2);
	add(head1, head2, n1, n2);
  	//print(head1);
  	//print(head2);
  	return 0;
}