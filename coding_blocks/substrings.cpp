/*
	Print substrings of a given string --substrings are consecutive(ac is not a substring)
	eg - abc
	out->abc,ab,a,b,bc,c
*/
#include<iostream>
#include<cstring>
using namespace std;
void print(char ch[], int i, int j){
	while(i<=j){
		cout<<ch[i];
		i++;
	}
	cout<<"\n";
}

int main(int argc, char const *argv[])
{
	char ch[1000];
	cin.getline(ch, 1000);
	int i=0;
	int j=0;
	int len = strlen(ch);
	while(i<len){
		j = i;
		while(j<len){
			print(ch, i, j);
			j++;
		}
		i++;
	}
	return 0;
}