#include<iostream>
#include<vector>
using namespace std;

class Vector{
public:
	int *arr;
	int cs;
	int ms;
	Vector(int n){
		arr = new int[n];
		cs = 0;
		ms = n;
	}

	void push_back(int data){
		if(cs==ms){
			ms = 2*ms;
			int old_size = ms;
			int *oldarr = arr;
			arr = new int[ms];
			for(int i=0;i<old_size;i++){
				arr[i] = oldarr[i];
			}
			delete []oldarr;
		}
		arr[cs]=data;
		cs++;

	}
	void pop_back(){
		if(cs>0){
			cs--;
		}
	}
	int size(){
		return cs;
	}
	int capacity(){
		return ms;
	}
	bool empty(){
		return cs==0;
	}
	int operator[](int a){
		return arr[a];

	}

};

int main(int argc, char const *argv[])
{
	/* code */
	Vector v(8);
	for (int i = 0; i < 8; i++)
	{
		v.push_back(i);
		/* code */
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout<<v[i]<<" ";
		/* code */
	}
	cout<<"\n";
	cout<<v.capacity()<<"\n";
	v.push_back(20);
	cout<<v.capacity()<<"\n";
	return 0;
}