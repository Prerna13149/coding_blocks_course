#include<iostream>
using namespace std;

template<typename T>//any T type of data which will be given by user

class node{
public:
	T data;
	node<T>* next;
	node(T num){
		data = num;
		next = NULL;
	}
};