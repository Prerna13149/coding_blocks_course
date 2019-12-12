#include<iostream>
#include<cstring>
using namespace std;

int convert_to_int(char ch[1000], int i, int n){
	//int i = 0;
	if(ch[i] == '\0'){
		return -1;
	}
	else{
		int a = ch[i] - '0';
		cout<<a<<"";
		i++;
		return convert_to_int(ch, i, n);

	}
}

int convert_to_int3(char ch[1000], int i, int n){
	//int i = 0;
	if(i<0){
		return 0;
	}
	else{
		int last_term = ch[i] - '0';
		//cout<<a<<"";
		i--;
		return convert_to_int3(ch, i, n)*10 + last_term;

	}
}

int convert_to_int2(char ch[1000], int i, int n, int arr[], int j){
	//int i = 0;
	if(ch[i] == '\0'){
		return -1;
	}
	else{		int a = ch[i] - '0';
		arr[j] = a;
		j++;
		i++;
		return convert_to_int2(ch, i, n, arr, j);

	}
}
int main(int argc, char const *argv[])
{
	char ch[1000];
	cin.getline(ch, 1000);
	int n = strlen(ch);
	int arr[1000000] = {0};
	//convert_to_int2(ch, n-1, n, arr, 0);
	int res = convert_to_int3(ch, n-1, n);
	cout<<res<<"\n";
	cout<<res/10<<"\n";
	// for (int i = 0; i < n; i++)
	// {
	// 	cout<<arr[i]<<" ";
	// 	/* code */
	// }
	return 0;
}