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


bool detectCycle(node* head){
	if(head==NULL||head->next==NULL){
		//cout<<"here"<<"\n";
		return false;
	}
	node* s = head;
	node* f = head->next;
	while(1){
		if(s==NULL||f==NULL||f->next==NULL||s->next==NULL){
			cout<<"here"<<"\n";
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
int main(int argc, char const *argv[])
{
	int num;
	node* head =NULL;
	node* prev = NULL;
	int ct=0;
	while(1){
		cin>>num;
		if(num==-1){
			break;
		}
		else if(ct==0){
			node* n = new node(num);
			head = n;
			prev = n;
		}
		else{
			node* n = new node(num);
			prev->next = n;
			prev = n;
		}
		ct++;
	}
	printLink(head);
	cout<<"\n";
	//cout<<head->data<<"\n";
	cout<<detectCycle(head)<<"\n";
	if(detectCycle(head)){
		cycleBreak(head);
	}
	
	return 0;
}
