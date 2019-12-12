#include<iostream>

using namespace std;
int main(int argc, char const *argv[])
{
	char ch[100];
	
	int n;
	cin>>n;
	cin.getline(ch, 100);
	cout<<ch<<"\n";
	cout<<n<<"\n";
	return 0;
}