#include<iostream>
#include<stack>

using namespace std;

void push_bottom(stack<int> &s, int t){
	if(s.empty()){
		s.push(t);
		return;
	}
	int ele = s.top();
	s.pop();
	push_bottom(s, t);
	s.push(ele);
	//return;
}
void reverse_stack(stack<int> &s){//to reflect changes int he actual stack
	if(s.empty()){
		return;
	}
	else{
		int ans = s.top();
		s.pop();
		reverse_stack(s);
		push_bottom(s, ans);
	}
}
void print_stack(stack<int>s){//stack is not passed by reference
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	return;
}
int main(int argc, char const *argv[])
{
	stack<int> s;
	for(int i=1;i<=4;i++){
		s.push(i);
	}
	cout<<"Printing stack"<<"\n";
	//printing stack
	print_stack(s);
	reverse_stack(s);
	cout<<"\n";
	print_stack(s);
	
	return 0;
}