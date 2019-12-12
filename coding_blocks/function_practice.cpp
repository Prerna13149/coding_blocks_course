#include<iostream>
using namespace std;
void f_to_c(int start, int end, int step){
	for (int i = start; i <= end; i=i+step)
	{
		int c = (9/5.0)*(i-32);
		cout<<i<<"\t"<<c<<"\n";
		/* code */
	}
}
int main(int argc, char const *argv[])
{
	int initial, final, step;
	cin>>initial>>final>>step;
	f_to_c(initial, final,step);

	return 0;
}