#include<iostream>
#include<list>
using namespace std;


class graph{
	int v;
	list<int>* adjlist;
public:
	graph(int vertices){
		adjlist = new list<int>[vertices];
		v = vertices;
	}
	void add_edge(int u, int v, bool birectional=1){//birectional=1 means edge u to v and v to u
		adjlist[u].push_back(v);
		if(birectional){
			adjlist[v].push_back(u);
		}
		
	}
	void print_graph(){
		for (int i = 0; i < v; i++)
		{
			cout<<i<<"-->";
			for(auto node:adjlist[i]){
				cout<<node<<" ";
			}
			cout<<"\n";
			/* code */
		}
	}
};
int main(int argc, char const *argv[])
{
	graph g(5);
	g.add_edge(0, 1);
	g.add_edge(0, 4);
	g.add_edge(1, 2);
	g.add_edge(1, 3);
	g.add_edge(1, 4);
	g.add_edge(2, 3);
	g.add_edge(4, 3);
	g.print_graph();
	/* code */
	return 0;
}