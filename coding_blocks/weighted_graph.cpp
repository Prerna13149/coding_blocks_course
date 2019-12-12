#include<iostream>
#include<list>
#include<map>
#include<queue>
#include<set>
#include<climits>

using namespace std;
template<typename T>

class graph{
	map<T, list<pair<T,int>>> adjlist;//int for the weight
public:
	void add_edge(T u, T v, int wt, bool bir=1){
		adjlist[u].push_back(make_pair(v,wt));
		if(bir){
			adjlist[v].push_back(make_pair(u,wt));
		}
	}

	void print(){
		for(auto node: adjlist){
			cout<<"node "<<node.first<<" ";
			for(auto child:node.second){
				cout<<"("<<child.first<<" "<<child.second<<")";
			}
			cout<<"\n";
		}
	}
	void SSSP(T src){
		map<T, int> distance;
		for(auto node:adjlist){
			distance[node.first]=INT_MAX;
		}
		set<pair<int, T>> s;
		s.insert(make_pair(0, src));
		distance[src] = 0;
		while(!s.empty()){
			auto p = *(s.begin());//s.begin() gives starting address of set-set is already sorted based on 1st index
			s.erase(s.begin());
			int parent_d = p.first;
			T parent = p.second;
			for(auto child:adjlist[parent]){
				if(parent_d + child.second < distance[child.first]){
					
					auto f = s.find(make_pair(distance[child.first], child.first));
					if(f!=s.end()){
						s.erase(f);
					}
					distance[child.first] = parent_d + child.second;
					s.insert(make_pair(distance[child.first], child.first));
					
				}
			}

		}
		for(auto node:distance){
			cout<<node.first<<" "<<node.second<<"\n";
		}
	}
};
int main(int argc, char const *argv[])
{
	graph <int>g;
	g.add_edge(0,1,8);
	g.add_edge(0,2,1);
	g.add_edge(0,3,5);
	g.add_edge(1,2,2);
	g.add_edge(2,3,4);
	g.add_edge(1,4,1);
	g.add_edge(2,3,4);

	g.print();
	g.SSSP(0);
	return 0;
}