/*
HOSTEL VISIT
Dean of MAIT is going to visit Hostels of MAIT. As you know that he is a very busy person so he decided to visit only first "K" nearest Hostels. Hostels are situated in 2D plane. You are given the coordinates of hostels and you have to answer the Rocket distance of Kth nearest hostel from origin ( Dean's place ) .


Input Format:
First line of input contains Q Total no. of queries and K There are two types of queries:

first type : 1 x y For query of 1st type, you came to know about the co-ordinates ( x , y ) of newly constructed hostel. second type : 2 For query of 2nd type, you have to output the Rocket distance of Kth nearest hostel till now.

The Dean will always stay at his place ( origin ). It is gauranted that there will be atleast k queries of type 1 before first query of type 2.

Rocket distance between two points ( x2 , y2 ) and ( x1 , y1 ) is defined as (x2 - x1)2 + (y2 - y1)2

Constraints:
1 < = k < = Q < = 10^5
-10^6 < = x , y < = 10^6 

Output Format:
For each query of type 2 output the Rocket distance of Kth nearest hostel from Origin.

Sample Input:
9 3
1 10 10
1 9 9
1 -8 -8
2
1 7 7
2
1 6 6 
1 5 5
2
Sample Output:
200
162
98
Time Limit: 2 sec
*/
#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;
class heap{
	vector<long long int> v;
	bool minHeap;
	bool compare(long long int a, long long int b){
		if(minHeap){
			return a<b;
		}
		else{
			return a>b;
		}

	}
	void heapify(long long int index){
		long long int l_child = 2*index;
		long long int r_child = 2*index + 1;
		long long int min_i = index;
		if(l_child<v.size() && compare(v[l_child], v[min_i])){
			min_i = l_child;
		}
		if(r_child<v.size() && compare( v[r_child], v[min_i])){
			min_i = r_child;
		}
		if(min_i!=index){
			swap(v[min_i], v[index]);
			heapify(min_i);
		}
		
	}
public:
	heap(bool type = true){
		minHeap = type;
		v.push_back(-1);
	}
	void push(long long int n){
		v.push_back(n);
		long long int index = v.size()-1;
		long long int parent = index/2;
		while(index > 1 && compare(v[index], v[parent])){
			swap(v[index], v[parent]);
			index = parent;
			parent = parent/2;
		}
	}
	long long int top(){
		return v[1];
	}
	bool isEmpty(){
		return v.size()==1;
	}
	long long int h_size(){
		return v.size();
	}
	void print(){
		for (long long int i = 1; i < v.size(); i++)
		{
			cout<<v[i]<<" ";
			/* code */
		}
	}
	bool isfull(long long int k){
		return v.size()==(k+1);
	}
	void pop(){
		long long int n = v.size()-1;
		swap(v[1], v[n]);
		v.pop_back();

		long long int index = 1;
		heapify(index);
	}
};
int main(int argc, char const *argv[])
{
	long long int n;
	long long int k;
	cin>>n>>k;
	long long int i=0;
	long long int q;
	long long int x;
	long long int y;
	heap h(false);
	while(i<n){
		cin>>q;
		if(q==1 && !h.isfull(k)){// curr_s<=(k+1)
			cin>>x>>y;
			long long int dist = pow(x, 2)  + pow(y, 2);
			h.push(dist);
		}
		else if(q==1 && h.isfull(k)){
			//cout<<"here"<<"\n";
			cin>>x>>y;
			long long int dist = pow(x, 2)  + pow(y, 2);
			long long int min = h.top();
			if(dist <= min){
				h.pop();
				h.push(dist);
			}
		}
		else{
			cout<<h.top()<<"\n";
		}
		//cout<<"size: "<<h.h_size()<<"\n";
		i++;
	}
	return 0;
}
