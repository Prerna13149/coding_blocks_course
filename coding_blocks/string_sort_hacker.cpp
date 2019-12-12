#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr1[1000];
	int arr2[1000];
	for (int i = 0; i < n; i++)
	{
		cin>>arr1[i];
		cin>>arr2[i];
		/* code */
	}
	int col;
	cin>>col;
	char rev[100];
	char comp[100];
	cin>>rev;
	cin>>comp;
	int reverse;
	int compare;
	if(rev[0]=='t'){
		reverse = 1;
	}
	else{
		reverse = 0;
	}
	if(comp[0]=='l'){
		//compare = 0;//lexo
		sort_lexo(arr1, arr2, n, col, reverse, compare);
	}
	else{
		//compare = 1;
		sort_numeric(arr1, arr2, n, col, reverse, compare);
	}

	return 0;
}