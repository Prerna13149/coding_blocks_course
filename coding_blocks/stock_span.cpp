#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

void createStack(stack<int> s){
	int ct = 0;
	int temp = s.top();
	while(!s.empty()){
		if(temp>=s.top()){
			ct++;
			s.pop();
		}
		else{
			break;
		}
	}
	cout<<ct<<" ";
	return;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int i=0;
	int num;
	stack<int>s;
	while(i<n){
		cin>>num;
		s.push(num);
		createStack(s);
		i++;
	}
	cout<<"END";
	
	return 0;
}
