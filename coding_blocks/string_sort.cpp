#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cin.get();
	char ch[1000];
	char ch2[1000];
	for (int i = 0; i < n; i++)
	{
		cin>>ch[i];
		cin>>ch2[i];
		/* code */
	}
	int n2;
	cin>>n2;
	cin.get();
	char rev[100];
	char com[100];
	cin>>rev;
	int reverse;
	cin>>com;
	int comp;//0=numeric 1=lexo

	if(rev[0]=='f'){
		reverse = 0;
	}
	else{
		reverse = 1;
	}
	if(com[0]=='l'){
		if(n2==1){
			sort_lexo()
		}
		else{
			sort_lexo();
		}
	}
	else{
		if(n2==1){
			sort_num();
		}
		else{
			sort_num();
		}
	}
	

	return 0;
}