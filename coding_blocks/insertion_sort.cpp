#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin>>N;
	int arr[1000000];
	for (int i = 0; i < N; i++)
	{
		cin>>arr[i];
		/* code */
	}
	int i=1;
	int temp;
	while(i<N){
		
		for(int j = i-1; j >= 0; j--)
		{
			if(arr[j]>arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
			else{
				//arr[j] = temp;
				break;
			}

			/* code */
		}
		for (int k = 0; k < N; k++)
		{
			cout<<arr[k]<<" ";
		}
		cout<<"\n";
		i++;
	}
	cout<<"Sorted array"<<"\n";
	for (int i = 0; i < N; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}