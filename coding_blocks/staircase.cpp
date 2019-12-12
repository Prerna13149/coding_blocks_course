#include<iostream>
using namespace std;

int ways2stair(int n){
	// if(n<0){
	// 	return 0;
	// }
	if(n==0 || n==1){//there is one way to reach 0
		return 1;
	}
	if(n==2){
		return 2;
	}
	return ways2stair(n-1) + ways2stair(n-2) + ways2stair(n-3);

}
int ways2stair_k(int n, int i){
	// if(n<0){
	// 	return 0;
	// }
	if(n==0 || n==1){//there is one way to reach 0
		return 1;
	}
	if(n==2){
		return 2;
	}
	int ans = 0;
	for (int k = 1; k <= i; k++)
	{
		ans = ans + ways2stair_k(n-i, k);

		/* code */
	}
	cout<<ans<<"\n";

}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<ways2stair(n)<<"\n";
	int k;
	//cin>>k;
	//cout<<ways2stair_k(n, k)<<"\n";

	return 0;
}