#include<iostream>
using namespace std;

int fact(int n){
	if(n==1){
		return n;
	}
	int ans = n * fact(n-1);
	return ans;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int out = fact(n);
	cout<<out<<"\n";
	return 0;
}