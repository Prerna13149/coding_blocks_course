#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int i=0;
	int num;
	stack<int>s;
	int val;
	while(i<n){
		cin>>num;
		if(num==1 && !s.empty()){
			cout<<s.top()<<"\n";
			s.pop();
		}
        else if(num==1 && s.empty()){
			cout<<"No Code"<<"\n";
			//s.pop();
		}
		else{
			cin>>val;
			s.push(val);
		}
		i++;
	}
	//cout<<"END";
	
	return 0;
}
