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
class queue{
public:
	node* head;
	node* tail;
	int cs;
	queue(){
		head = NULL;
		tail = NULL;
		cs=0;
	}
	void enqueue(int num){
		node* n = new node(num);
		if(head==NULL){
			head = n;
			tail = n;
		}
		if(tail!=NULL){
			tail->next = n;
			tail = n;
			cs++;
		}
	}
	void dequeue(){
		if(head==NULL){
			return;
		}
		if(head==tail){
			head = NULL;
			tail = NULL;
			cs--;
		}
		if(head!=NULL){
			node* temp = head;
			head = head->next;
			delete temp;
			cs--;
		}
	}
	int front(){
		if(head!=NULL){
			return head->data;
		}
	}
	bool empty(){
		if(head==NULL){
			return true;
		}
		return false;
	}
};
int main(int argc, char const *argv[])
{
	queue s;
	for(int i=0;i<9;i++){
		s.enqueue(i);
	}
	cout<<"Printing qeueu"<<"\n";
	//printing stack
	while(!s.empty()){
		cout<<s.front()<<" ";
		s.dequeue();
	}
	return 0;
}