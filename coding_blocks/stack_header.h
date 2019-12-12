#include<iostream>
#include"node.h"
using namespace std;

template<typename T>//any T type of data which will be given by user

class stack{
public:
	node<T>* head;
	int cs;//current_size;
	stack(){
		head = NULL;
		cs = 0;
	}
	void push(T d){
		if(head==NULL){
			node<T>* new_node = new node<T>(d);
			head = new_node;
		}
		else{
			node<T>* new_node= new node<T>(d);
			new_node->next = head;
			head = new_node;
		}
		cs++;
	}
	void pop(){
		if(cs>0){
			node<T>* temp = head;
			head = head->next;
			delete temp;
			cs--;
		}
	}
	T top(){
		// if(cs>0){
			return head->data;
		// }
		
	}
	bool empty(){
		return cs==0;
	}
};
