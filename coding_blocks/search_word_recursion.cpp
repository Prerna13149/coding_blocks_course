#include<iostream>
#include<cstring>
using namespace std;
void printNumber(char ch[1000][1000], int n){
	if(n==0){
		return;
	}
	printNumber(ch, n/10);
	int a = n%10;
	//cout<<a<<" ";
	cout<<ch[a]<<" ";
	
	return;
}
int main(int argc, char const *argv[])
{
	char ch[1000][1000] = {"zero", "one","two","three", "four", "five", "six", "seven", "eight", "nine"};
	int n;
	cin>>n;
	printNumber(ch, n);
	
	return 0;
}