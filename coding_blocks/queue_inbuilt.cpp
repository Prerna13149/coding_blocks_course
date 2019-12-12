#include<iostream>
#include<queue>
using namespace std;

int main(int argc, char const *argv[])
{
	queue<int> s;
	for(int i=0;i<9;i++){
		s.push(i);
	}
	cout<<"Printing queue"<<"\n";
	//printing stack
	while(!s.empty()){
		cout<<s.front()<<" ";
		s.pop();
	}
	return 0;
}