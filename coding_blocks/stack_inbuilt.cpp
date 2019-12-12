#include<iostream>
#include<stack>

using namespace std;

int main(int argc, char const *argv[])
{
	stack<int> s;

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