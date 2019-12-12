#include<iostream>
#include<cstring>
using namespace std;
void detect_duplicate(char ch[], int n, int i){
	if(i>n){
		return;
	}
	cout<<ch[i];
	if(ch[i]==ch[i+1]){
		cout<<"*";
	}
	
	detect_duplicate(ch, n, i+1);
}
int main(int argc, char const *argv[])
{
	char ch[1000];
	cin>>ch;
	int n = strlen(ch);
	detect_duplicate(ch, n, 0);
	return 0;
}