#include<iostream>
#include "stack_header.h"
using namespace std;

int main(int argc, char const *argv[])
{
	stack<int> s;
	for(int i=0;i<9;i++){
		s.push(i);
	}
	cout<<"Printing stack"<<"\n";
	//printing stack
	// stack<char>s;
	// s.push('A');
	// s.push('B');
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}