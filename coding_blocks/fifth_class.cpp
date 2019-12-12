#include<iostream>
#include<climits>
using namespace std;


//Finding max element in an array
int main(int argc, char const *argv[])
{
	int N;
	cin>>N;
	int arr[100];
	int i=0;
	int max = INT_MIN;
	for(i=0;i<N;i++){
		cin>>arr[i];
		if(arr[i]>max){
			max =arr[i];
		}
	}
	cout<<"Max value: "<<max<<endl;
	return 0;
}