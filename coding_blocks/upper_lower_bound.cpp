#include<iostream>
using namespace std;

int binarySearch(int arr[], int st, int e, int data){
	int start = st;
	int end = e;
	int mid;
	int res;
	if(start > end){
		return -1;
	}
	while(start <= end){
		mid = (start + end)/2;
		if(arr[mid] == data){
			cout<<mid<<" ";
			int res = binarySearch(arr, mid+1, e, data);
			if(res==-1){
				res = mid;
			}
			else{
				return -100;
			}
			return res;
		}
		else if(arr[mid]>data){
			return binarySearch(arr, start, mid-1, data);
		}
		else{
			return binarySearch(arr, mid+1, end, data);
		}
	}
	//return res;
}
// int findBound(int arr[], int s, int e, int num){
// 	if(s>=e){
// 		//cout<<-1<<" ";
// 		return -1;
// 	}
// 	int mid = (s+e)/2;
// 	if(arr[mid]==num){
// 		cout<<mid<<" ";
// 		int res = findBound(arr, mid+1, e, num);
// 		if(res!=-1){
// 			cout<<res<<" ";
// 		}
// 		else{
// 			cout<<mid<<" ";
// 		}
// 		return -2;
// 	}
// 	int ans;
// 	if(arr[mid]>num){
// 		ans = findBound(arr, s, mid-1, num);
// 	}
// 	else{
// 		ans = findBound(arr, mid+1, e, num);
// 	}
// 	return ans;
// }
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
	int test;
	cin>>test;
	int i=0;
	while(i<test){
		int num;
		cin>>num;
		int ans = binarySearch(arr, 0, n-1, num);
		if(ans!=-100 && ans!=-1){
			cout<<ans<<"\n";
		}
		else if(ans==-1){
			cout<<-1<<" "<<-1<<"\n";
		}
		else{
			cout<<"\n";
		}
		
		i++;
	}
	
	return 0;
}