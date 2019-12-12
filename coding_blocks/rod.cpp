#include<iostream>
#include<climits>
using namespace std;

int getMax(int *cost, int len){
	if(len==1){
		return cost[0];
	}
	int ans = INT_MIN;
	for (int i = 0; i < len; i++)
	{
		
		/* code */
	}
}
int main(){
	int cost[4] = {2, 3, 2, 5};
	int len = 4;
	cout<<getMax(cost, len)<<"\n";
}