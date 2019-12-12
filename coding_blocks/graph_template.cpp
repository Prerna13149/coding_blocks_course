#include<iostream>
#include<list>
#include<map>

using namespace std;
template<typename T>
class graph{
	map<T, list<T>> adjlist;
public:
	void add_edge(T u, T v, bool bir=1){
		adjlist[u].push_back(v);
		if(bir){
			adjlist[v].push_back(u);
		}
	}
	void print(){
		for(auto node:adjlist){
			
			cout<<node.first<<"-->";//gives key
			for(auto child:node.second){//going to the linkedlist
				cout<<child<<" ";
			}
			cout<<"\n";
		}
	}
};

int main(int argc, char const *argv[])
{
	graph <string>g;
	g.add_edge("Modi", "Yogi", false);
	g.add_edge("Modi", "Trump", false);
	g.add_edge("Prabhu", "Modi", false);	
	g.add_edge("Trump", "Modi", false);
	g.add_edge("Yogi", "Modi", false);
	g.add_edge("Putin", "Trump", false);
	g.add_edge("Putin", "Pope", false);	
	g.print();			
	return 0;
}