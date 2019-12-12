#include<iostream>
using namespace std;

int factorial(int n){
	int ans = 1;
	while(n>0){
		ans = ans * n;
		n--;
	}
	return ans;
}
int ncr(int n, int r){
	int a = factorial(n);
	int b = factorial(n-r);
	int c = factorial(r);
	int res = a/(b*c);
	return res;

}
int main(int argc, char const *argv[])
{
	int n;
	int r;
	cin>>n>>r;
	cout<<ncr(n,r)<<"\n";
	return 0;
}

