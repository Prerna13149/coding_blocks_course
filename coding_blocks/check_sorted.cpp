#include<iostream>
using namespace std;
bool checkSorted2(int *a, int n){//can check from back
	if(n==0||n==1){
		return true;
	}
	if(a[n-1]>=a[n-2] && checkSorted2(a, n-1)){
		return true;
	}
	return false;

}
bool checkSorted(int *a, int n){
	if(n==0||n==1){
		return true;
	}
	if(a[0]<=a[1] && checkSorted(a+1, n-1)){
		return true;
	}
	return false;
}
bool check_sorted_index(int *a, int n, int i){
	if(i==(n-1)){
		return true;
	}
	if(a[i]<=a[i+1] && check_sorted_index(a, n, i+1)){
		return true;
	}
	return false;
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
	if(checkSorted(arr, n)){
		cout<<"true"<<"\n";
	}
	else{
		cout<<"false"<<"\n";
	}
	if(checkSorted2(arr, n)){
		cout<<"true"<<"\n";
	}
	else{
		cout<<"false"<<"\n";
	}
	if(check_sorted_index(arr, n, 0)){
		cout<<"true"<<"\n";
	}
	else{
		cout<<"false"<<"\n";
	}

	return 0;
}