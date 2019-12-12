#include<iostream>
using namespace std;

class circular_q{
public:
	int *arr;
	int cs;
	int f;
	int e;
	circular_q(int n){
		arr = new int[n];
		cs = 0;
		f = 0;
		e = n-1;
	}
	void push(int num, int n){
		//cout<<"I am here"<<"\n";
		if(cs==n){
			//cout<<"Can't push"<<"\n";
			return;
		}

		else{
			e = (e+1)%n;
			arr[e] = num;
			cs++;
		}
	}
	int front(){
		if(cs!=0){
			return arr[f]; 
		}
	}
	void pop(int n){
		if(cs!=0){
			int a = arr[f];
			//cout<<"popping out "<<a<<"\n";
			cs--;
			arr[f] = 0;
			f=(f+1)%n;
		}
	}
	bool empty(){
		return cs==0;
	}
};

void print(circular_q q){
	while(!q.empty()){
		int a = q.front();
		cout<<a<<"\n";
		q.pop(10);
	}
	return;
}
int main(int argc, char const *argv[])
{
	circular_q q(10);
	cout<<"Start queue"<<"\n";
	for (int i = 0; i < 10; i++)
	{
		q.push(i, 10);
		/* code */
	}
	print(q);
	return 0;
}
