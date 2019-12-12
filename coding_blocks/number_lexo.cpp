#include<iostream>
using namespace std;
// void convert(int n, char ch[1000]){
// 	int i=0;
// 	int temp = n;
// 	int len=0;
// 	while(n!=0){
// 		len++;
// 		n=n/10;
// 	}
// 	ch[len+1] ='\0';
// 	while(len>=0){
// 		ch[len]=char(temp%10);
// 		len--;
// 	}

// 	char a = char(n);
// }

int getLength(int a){
	int len=0;
	while(a>0){
		len++;
		a = a/10;
	}
	return len;
}
int digit_at(int n, int x){
	int len = getLength(n);
	int num = len-x;
	//cout<<"num"<<num<<"\n";
	int ct =0;
	int t;
	while(n>0){
		t = n%10;
		
		n=n/10;
		ct++;
		if(ct==num){
			//cout<<"t "<<t;
			return t;
		}
	}
	return 0;
}
int compare(int a, int b){
	int a_len = getLength(a);
	int b_len = getLength(b);
	//cout<<"a "<<a<<" "<<"b "<<b<<"\n";
	//cout<<"a len: "<<a_len<<" b len: "<<b_len;
	int n;
	if(a_len>b_len){
		n = a_len;
	}
	else{
		n = b_len;
	}
	int i=0;
	while(i<n){
		int a1=digit_at(a, i);
		int a2=digit_at(b, i);
		//cout<<"a1 "<<a1<<"a2 "<<a2<<"\n";
		if(a1>a2){
			return 1;
		}
		i++;
	}
	// while(a!=0){
	// 	return 1;
	// }
	// while(b!=0){
	// 	return 2;
	// }
	return 2;
}
void sortLexo(int arr[], int n){
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			int res = compare(arr[j], arr[j+1]);
			//cout<<"res is: "<<res<<" ";
			if(res==1){
				swap(arr[j], arr[j+1]);
			}
			/* code */
		}
		/* code */
	}
	//cout<<"\n";
}
void printLexo(int n){
	//char arr[1000][1000];
	int arr[100];
	for (int i = 0; i <= n; i++)
	{
		arr[i] = i;
		/* code */
		// char ans[1000];
		// convert(i, ans);

	}
	sortLexo(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";

	}

}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	printLexo(n+1);
	return 0;
}