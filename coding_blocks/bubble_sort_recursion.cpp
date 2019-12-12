/*
	Implement bubble sort using recursion
*/
#include<iostream>
using namespace std;
void bubble_sort_recur(int arr[], int n, int step){
	if(step==(n-1)){
		return ;
	}
	else{
		for (int i = 0; i < n-step-1; i++)
		{
			if(arr[i]>arr[i+1]){
				swap(arr[i], arr[i+1]);
			}
			/* code */
		}
		step++;
		bubble_sort_recur(arr, n, step);
		return;
	}

}

void bubble_sort_recur2(int arr[], int n, int step, int j){
	if(step==(n-1)){
		return ;
	}
	if(j==(n-step-1)){
		j=0;
		step++;
		bubble_sort_recur2(arr, n, step, j);
		return;
	}
	else{
		if(arr[j]>arr[j+1]){
			swap(arr[j], arr[j+1]);
		}
		bubble_sort_recur2(arr, n, step, j+1);//buble sort for 2 loops
		return;
	}

}

int main(int argc, char const *argv[])
{
	int arr[1000000];
	int n;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
		/* code */
	}
	int step = 0;
	bubble_sort_recur2(arr, n, step, 0);
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
		/* code */
	}

	return 0;
}