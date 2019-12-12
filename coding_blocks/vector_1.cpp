#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


bool compare(int a, int b){
	return a>b;
}
int main(int argc, char const *argv[])
{
	vector<int>v;
	int n;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		v.push_back(i);//to add elements in vector
		/* code */
	}
	v.pop_back();
	v.push_back(10);
	for (int i = 0; i < v.size(); i++)
	{
		cout<<v[i]<<" ";
		/* code */
	}
	cout<<"\n";
	cout<<v.capacity()<<"\n";
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size(); i++)
	{
		cout<<v[i]<<" ";
		/* code */
	}

	return 0;
}