#include<iostream>
#include<cstring>
using namespace std;

int main(int argc, char const *argv[])
{
	char ch[1000][1000] = {"Hello", "world","coding","wonderful"};
	// int n;
	// cin>>n;
	// for (int i = 0; i < n; i++)
	// {
	// 	cin.getline(ch[i][], 1000);
	// 	 code 
	// }
	// for (int i = 0; i < n; i++)
	// {
	// 	cout<<ch[i][]<<" ";
	// 	/* code */
	// }
	char ch2[1000];
	cin.getline(ch2, 1000);
	int n1 = strlen(ch2);
	int flag = 0;
	for (int i = 0; i < 4; i++)
	{
		int n2 = strlen(ch[i]);
		if(n1==n2){
			int j=0;
			while(ch[i][j]!='\0'){
				if(ch[i][j]!=ch2[j]){
					flag = 1;
					break;
				}
				j++;
			}
			if(flag==0){
				cout<<"Found it"<<"\n";
				return 0;
			}
		}
		/* code */
	}
	if(flag==1){
		cout<<"not found"<<"\n";
	}
	

	return 0;
}