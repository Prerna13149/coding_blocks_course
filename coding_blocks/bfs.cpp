#include<iostream>
#include<list>
#include<map>
#include<queue>
#include<climits>

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
	void bfs(T source){
		queue<T> q;
		q.push(source);
		map<T, bool> visit;
		visit[source]=true;
		while(!q.empty()){
			T top = q.front();
			q.pop();
			cout<<top<<" ";
			for(auto child:adjlist[top]){
				if(!visit[child]){
					q.push(child);
					visit[child] = true;
				}
			}
		}

	}
	void dfs_helper(T source, map<T, bool> visit){
		cout<<source<<"\n";
		visit[source] = true;
		for (auto node:adjlist[source])
		{
			if(!visit[node]){
				dfs_helper(node, visit);
			}
			/* code */
		}
	}
	void dfs2(T src){
		map<T, bool> visit;
		int component=1;
		dfs_helper(src, visit);
		for (auto node: adjlist)
		{
			if(!visit[node.first]){
				component++;
				dfs_helper(node.first, visit);
			}
			/* code */
		}
		cout<<"component: "<<component<<"\n";
	}
	// void dfs(T source, map<T, bool> visit){
	// 	cout<<source<<"\n";
	// 	visit[source] = true;
	// 	for (auto node:adjlist[source])
	// 	{
	// 		if(!visit[node]){
	// 			dfs(node, visit);
	// 		}
	// 		/* code */
	// 	}
	// }
	void single_source_shortest(T source){
		queue<T> q;
		q.push(source);
		map<T, int> distance;
		for(auto node: adjlist){
			distance[node.first]=INT_MAX;
		}
		distance[source]=0;
		while(!q.empty()){
			T top = q.front();
			q.pop();
			cout<<top<<" ";
			for(auto child:adjlist[top]){
				if(distance[child]==INT_MAX){
					q.push(child);
					distance[child] = distance[top] + 1 ;
				}
			}
		}
		for(auto node: distance){
			cout<<node.second<<"\n";
		}
	}

	void print_path(T source, T dest){
		queue<T> q;
		q.push(source);
		map<T, int> distance;
		map<T, T>parent;
		parent[source] = source;
		for(auto node: adjlist){
			distance[node.first]=INT_MAX;
		}
		distance[source]=0;
		while(!q.empty()){
			T top = q.front();
			q.pop();
			cout<<top<<" ";
			for(auto child:adjlist[top]){
				if(distance[child]==INT_MAX){
					q.push(child);
					distance[child] = distance[top] + 1 ;
					parent[child] = top;
				}
			}
		}
		T temp = dest;
		while(temp!=source){
			cout<<temp<<"<--";
			temp = parent[temp];
		}
		cout<<source<<"\n";
	}
};

int main(int argc, char const *argv[])
{
	// graph <string>g;
	// g.add_edge("Modi", "Yogi", false);
	// g.add_edge("Modi", "Trump", false);
	// g.add_edge("Prabhu", "Modi", false);	
	// g.add_edge("Trump", "Modi", false);
	// g.add_edge("Yogi", "Modi", false);
	// g.add_edge("Putin", "Trump", false);
	// g.add_edge("Putin", "Pope", false);	
	// //g.print();
	// g.single_source_shortest("Modi");	

	graph <int> g;
	g.add_edge(0, 1);
	g.add_edge(0, 4);
	g.add_edge(1, 2);
	g.add_edge(2, 3);
	g.add_edge(2, 4);
	g.add_edge(3, 4);
	g.add_edge(6, 7);
	//g.single_source_shortest(0);
	//g.print_path(0, 2);
	//map<int, bool> my_visit;
	g.dfs2(2);

//Snake and Ladder
// int board[50] = {0};  board[2] = 13;
// board[5] = 2;
// board[9] = 18;
// board[18] = 11;
// board[17]=-13;  board[20] = -14;
// board[24] = -8;
// board[25] = -10;
// board[32] = -2;
// board[34] = -22;
// graph<int>g;
// 	for (int u = 0; u <=36; u++)
// 	{
// 		for (int dice = 1; dice <=6; dice++)
// 		{
// 			int v = u + dice + board[u+dice];
// 			g.add_edge(u, v, false);
// 			/* code */
// 		}
// 		/* code */
// 	}
// 	g.print_path(0, 36);
	//g.single_source_shortest(0);

	return 0;
}
