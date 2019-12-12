#include <iostream>
#include <queue>
#include <cstdlib>

using namespace std;

class heap{
	vector<int> v;
	bool min_heap;
public:
	heap(bool t=true){
		min_heap  = t;
		//block the first index
		v.push_back(-1);
	}
	void heapify_up(){
		int i=v.size()-1;
		while(i>0){
			if(v[i]<v[i/2]){
				swap(v[i], v[i/2]);
			}
			else{
				break;
			}
			i = i/2;
		}
	}
	void insert(int data){
		v.push_back(data);
		heapify_up();
	}
	int top(){
		return v[1];
	}
	bool isEmpty(){
		return v.size()==1;
	}
	void heapify_down(){
		int i=1;
		int end = v.size();
		cout<<v.size()<<"\n";
		while(i<end){
			if(v[i]>v[2*i]){
				swap(v[i], v[2*i]);
				i = 2*i;
			}
			else if(v[i]>v[2*i+1]){
				swap(v[i], v[2*i+1]);
				i = 2*i + 1;
			}
			else{
				break;
			}
		}
	}
	void delete_top(){
		swap(v[1], v[v.size()-1]);
		v.erase(v.end());
		//heapify_down();
	}
	void print(){
		for (int i = 1; i <= v.size()-1; i++)
		{
			cout<<v[i]<<" ";
			/* code */
		}
	}
};

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	heap h;
	int i=0;
	int num;
	while(i<n){
		cin>>num;
		h.insert(num);
		i++;
	}
	h.print();
	//h.delete_top();
	//h.print();
	return 0;
}