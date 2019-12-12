#include<iostream>
#include<queue>
using namespace std;

class stack{
public:
	queue<int>q1;
	queue<int>q2;
	void push(int d){
		if(q1.empty() && q2.empty()){
			q1.push(d);
		}
		if(q1.empty() && !q2.empty()){
			q1.push(d);
		}
		else{
			q2.push(d);
		}
	}
	void pop(){
		if(q1.empty() && q2.empty()){
			return;
		}
		else if(!q1.empty() && q2.empty()){
				while(q1.size()!=1){
					int a = q1.front();
					q1.pop();
					q2.push(a);
				}
				q1.pop();
			}
		else{
			while(q2.size()!=1){
					int a = q2.front();
					q2.pop();
					q1.push(a);
				}
				q2.pop();
		}

		}
	int top(){
		if(q1.empty() && q2.empty()){
			return -1;
		}
		else if(!q1.empty() && q2.empty()){
				while(q1.size()!=1){
					int a = q1.front();
					q1.pop();
					q2.push(a);
				}
				int ans = q1.front();
				q1.pop();
				q2.push(ans);
				return ans;
			}
		else{
			while(q2.size()!=1){
					int a = q2.front();
					q2.pop();
					q1.push(a);
				}
				int ans = q2.front();
				q2.pop();
				q1.push(ans);
				return ans;
		}

	}
	bool empty(){
		if(q1.empty() && q2.empty()){
			return true;
		}
		return false;
	}
};
int main(int argc, char const *argv[])
{
	stack s;
	for(int i=0;i<9;i++){
		s.push(i);
	}
	cout<<"Printing queue"<<"\n";
	//printing stack
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}