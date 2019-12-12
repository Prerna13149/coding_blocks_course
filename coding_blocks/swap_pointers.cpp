#include<iostream>
using namespace std;

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(int argc, char const *argv[])
{
	int a = 10;
	int b = 15;

	int *a_1 = &a;
	int *b_1 = &b;
	cout<<"Before swapping"<<"\n";
	cout<<*a_1<<"\n";
	cout<<*b_1<<"\n";

	swap(a_1, b_1);


	// int *temp = NULL;
	// temp = &b;
	// b_1 = &a;
	// a_1 = temp;
	cout<<"After swapping"<<"\n";
	cout<<*a_1<<"\n";
	cout<<*b_1<<"\n";

	return 0;
}