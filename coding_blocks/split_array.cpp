#include<iostream>
using namespace std;

int getSum(int arr[], int n){
	int sum=0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
		/* code */
	}
	return sum;
}
void split(int arr[], int left[], int right[], int i, int j, int k, int n, int &count){
	if(i>n){
		return;
	}
	int s_l = getSum(left, j);
	int s_r = getSum(right, k);
	//cout<<s_l<<" "<<s_r<<"\n";
	//cout<<j+k<<"\n";
	if(s_l==s_r && i!=0 &&(j+k)>=n){
		for (int t = 0; t < j; t++)
		{
			cout<<left[t]<<" ";
			/* code */
		}
		cout<<" and ";
		for (int t = 0; t < k; t++)
		{
			cout<<right[t]<<" ";
			/* code */
		}
		cout<<"\n";
		count = count + 1;
		return;

	}
	left[j] = arr[i];
	split(arr, left, right, i+1, j+1, k, n, count);
	right[k] = arr[i];
	split(arr, left, right, i+1, j, k+1, n, count);
	return;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[1000];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
		/* code */
	}
	int left[1000];
	int right[1000];
	int count = 0;
	split(arr, left, right,0, 0, 0, n, count);
	cout<<count<<"\n";
	return 0;
}