#include<iostream>
#include<cstring>
using namespace std;
// void printPermute(char ch[100000], int n){
// 	int i=n;
// 	int j=i;
// 	while(ch[i]!='\0'){
// 		while(ch[j]!='\0'){
// 			swap(ch[i], ch[j]);
// 			j++;
// 		}
// 		i++;
// 	}
// 	cout<<ch<<"\n";
// }
void permuation(char ch[], int i){
	if(ch[i]=='\0'){
		cout<<ch<<"\n";
		return;
	}
	for (int j = i; ch[j]!='\0'; j++)
	{
		swap(ch[i], ch[j]);
		permuation(ch, i+1);
		swap(ch[i], ch[j]);//important to unswap, to backtrack
		/* code */
	}
}
int main(int argc, char const *argv[])
{
	char ch[10000];
	cin.getline(ch, 10000);
	//int n = strlen(ch);
	permuation(ch, 0);
	// for (int i = 0; i < n ; i++)
	// {
	// 	//code 
	// 	printPermute(ch, i);
	// }
	
	return 0;
}