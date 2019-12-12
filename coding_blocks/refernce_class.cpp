#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a = 10;
	int &b = a;
	b++;
	int &c = b;
	c++;cout<<a<<b<<c<<"\n";
	return 0;
}