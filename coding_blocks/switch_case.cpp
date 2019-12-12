#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char ch;
	cin>>ch;
	switch(ch){
		case 'M': cout<<"Monday"<<"\n";
					break;
		case 'T': cout<<"Tuesday"<<"\n";
		case 'W': cout<<"Wednesday"<<"\n";
				break;
		default: cout<<"not a weekday"<<"\n";
	}
	return 0;
}