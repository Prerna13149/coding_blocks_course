#include<iostream>
#include<cstring>
using namespace std;

int main(int argc, char const *argv[])
{
	char ch[1000];
	cin.getline(ch, 1000);
	char ch2[1000];
	cin.getline(ch2, 1000);
	int l = strlen(ch);
	cout<<l<<"\n";
	strcpy(ch, ch2);
	cout<<ch<<"\n";
	return 0;
}