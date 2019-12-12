#include<iostream>
#include<cstring>
using namespace std;
int fact(int n){
	if(n==1){
		return n;
	}
	return n*fact(n-1);
}
int fib(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	return fib(n-1)+fib(n-2);
}
void printArray(int arr[], int n, int i){
	if(i==n){
		return;
	}
	cout<<arr[i]<<" ";
	printArray(arr, n, i+1);
}
bool checkArray(int arr[], int n, int i){
	if(i==(n-1)){
		return true;
	}
	if(arr[i]<arr[i+1]){
		return checkArray(arr, n, i+1);
	}
	return false;
}
int getSum(int arr[], int n, int i, int sum){
	if(i==n){
		return sum;
	}
	sum = sum + arr[i];
	return getSum(arr, n, i+1, sum);
}
void printReverse(int arr[], int n, int i){
	if(i==n){
		return;
	}
	printReverse(arr, n, i+1);
	cout<<arr[i]<<" ";
}
int search(int arr[], int n, int i, int data){
	if(i==n){
		return -1;
	}
	if(arr[i]==data){
		return i;
	}
	return search(arr, n, i+1, data);
}
void printSeq(char ch[][10], int n){
	if(n==0){
		return;
	}
	//cout<<n<<"\n";
	printSeq(ch, n/10);
	int a = n%10;
	cout<<ch[a]<<" ";
	return;
}
void bubblesort(int arr[], int n, int i, int j){
	if(i>=(n-1)){
		return;
	}
	if(j==(n-i-1) && i<(n-1)){
		j=0;
		bubblesort(arr, n, i+1, j);
		return;
	}
	if(arr[j]>arr[j+1] && j<(n-1)){
		swap(arr[j], arr[j+1]);
	}
	bubblesort(arr, n, i, j+1);
		//bubblesort(arr, n, i, j+1);
	return;
}
void selectionSort(int arr[], int n, int i, int j, int min){
	if(i>=(n-1)){
		return;
	}
	if(j>(n-1)){
		swap(arr[min], arr[i]);
		i++;
		j=i+1;
		min = i;
		selectionSort(arr, n, i, j, min);
		return;
	}
	if(arr[min]>arr[j]){
		min = j;
	}
	selectionSort(arr, n, i, j+1, min);
	return;

}
void subSequences(char ch[100], char out[100], int n, int i, int j){
	if(n==i){
		out[j]='\0';
		cout<<out<<"\n";
		return;
	}
	out[j]=ch[i];
	subSequences(ch, out, n, i+1, j+1);
	subSequences(ch, out, n, i+1, j);
	return;
}

int main(int argc, char const *argv[])
{
	// int n;
	// cin>>n;
	// int res = fact(n);
	// cout<<res<<"\n";
	// int out2 = fib(4);
	// cout<<out2<<"\n";
	// int arr[100];
	// for (int i = 0; i < n; i++)
	// {
	// 	cin>>arr[i];
	// 	/* code */
	// }
	// printArray(arr, n, 0);
	// if(checkArray(arr, n, 0)){
	// 	cout<<"Yes"<<"\n";
	// }
	// else{
	// 	cout<<"No"<<"\n";
	// }
	// int sum = getSum(arr, n, 0, 0);
	// cout<<sum<<"\n";
	// printReverse(arr, n, 0);
	// int data;
	// cin>>data;
	// int res = search(arr, n, 0, data);
	// cout<<res<<"\n";

	// char ch[][10]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	// int b;
	// cin>>b;
	// printSeq(ch, b);
	//bubblesort(arr, n, 0, 0);
	// selectionSort(arr, n, 0, 0, -1);
	// cout<<"\n";
	// printArray(arr, n, 0);
	//cin.get();
	char ch[100];
	cin.getline(ch, 100);
	char out[100];
	int n = strlen(ch);
	subSequences(ch, out, n, 0, 0);

	return 0;
}