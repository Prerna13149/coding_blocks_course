#include<iostream>
using namespace std;
int getWays(int i, int j){
	if(i==0 || j==0){
		return 1;
	}
	// if(i==0){
	// 	return getWays(i-1, j)
	// }
	// if(j==0){

	// }
	return getWays(i-1, j) + getWays(i, j-1);
}

int main(int argc, char const *argv[])
{
	int i;
	int j;
	cin>>i>>j;
	int res = getWays(i, j);
	cout<<res<<"\n";
	return 0;
}