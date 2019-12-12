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

class stack{
public:
	node* head;
	int cs;//current_size;
	stack(){
		head = NULL;
		cs = 0;
	}
	void push(int d){
		if(head==NULL){
			node* new_node = new node(d);
			head = new_node;
		}
		else{
			node* new_node= new node(d);
			new_node->next = head;
			head = new_node;
		}
		cs++;
	}
	void pop(){
		if(cs>0){
			node* temp = head;
			head = head->next;
			delete temp;
			cs--;
		}
	}
	int top(){
		// if(cs>0){
			return head->data;
		// }
		
	}
	bool empty(){
		return cs==0;
	}
};

int main(int argc, char const *argv[])
{
	stack s;
	for(int i=0;i<9;i++){
		s.push(i);
	}
	cout<<"Printing stack"<<"\n";
	//printing stack
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	
	return 0;
}