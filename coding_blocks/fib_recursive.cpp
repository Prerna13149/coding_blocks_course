#include<iostream>
using namespace std;
int fib(int n){
	if(n==0 || n==1){
		return n;
	}
	// else if(n==1){
	// 	return 1;
	// }
	else{
		int ans = fib(n-1)+fib(n-2);
		return ans;
	}

}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int out  = fib(n);
	cout<<out<<"\n";
	return 0;
}