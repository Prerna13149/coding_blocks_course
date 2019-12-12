#include<iostream>
#include<vector>
using namespace std;

class stack{
public:
	vector<int>v;
	void push(int n){
		v.push_back(n);
	}
	void pop(){
		v.pop_back();
	}
	int top(){
		return v[v.size()-1];
	}
	bool empty(){
		return v.size()==0;
	}
};
int main(int argc, char const *argv[])
{
	stack v;

	for (int i = 0; i < 9; i++)
	{
		v.push(i);
		/* code */
	}
	//pritning vector
	while(!v.empty()){
		cout<<v.top()<<" ";
		v.pop();
	}
	return 0;
}