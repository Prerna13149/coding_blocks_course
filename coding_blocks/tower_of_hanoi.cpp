#include<iostream>
using namespace std;
/*
Transfer discs from source to destination
*/

void towerofhanoi(int n, char source, char helper, char destination){
	if(n==0){
		return;
	}
	towerofhanoi(n-1, source, destination, helper);//we transfer n-1 to helper, so helper becomes destination
	cout<<"taking "<<n<<"th disc from source"<<source<<"to destintion "<<destination<<"\n";
	towerofhanoi(n-1, helper, source, destination);//transfer discs from helper to destination
	//return;
}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	char source = 'A', helper = 'B', destination='C';
	towerofhanoi(n, source, helper, destination);
	return 0;
}