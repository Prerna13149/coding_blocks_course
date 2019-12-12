#include<iostream>
using namespace std;

int search(int *a, int n, int i, int data){
	if(i==n){
		return -1;
	}
	if(a[i]==data){
		return i;
	}
	return search(a, n, i+1, data);
}
int search2(int *a, int n, int i, int data){//print last occurence of a digit
	if(i==n){
		return -1;
	}

	int curr_index;
	if(a[i]==data){
		curr_index = i;
		int next_index = search2(a, n, i+1, data);
		if(next_index>curr_index){// this is important to check if -1 comes, it is not updated
			curr_index = next_index;
		}
		return curr_index;
	}
	return search2(a, n, i+1, data);
	
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[1000000];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
		/* code */
	}
	int data;
	cin>>data;
	int res = search2(arr, n, 0, data);
	cout<<res<<"\n";
	return 0;
}