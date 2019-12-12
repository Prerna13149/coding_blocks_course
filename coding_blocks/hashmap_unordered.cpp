#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;


int main(int argc, char const *argv[])
{
	// unordered_map<string, int> h;
	// h.insert(make_pair("kiwi", 100));
	// pair<string, int> p("orange", 200);
	// h.insert(p);
	// h["apple"]=390;
	// for(auto node: h){
	// 	cout<<node.first<<" "<<node.second<<"\n";
	// }	

	unordered_map<string, vector<int>> h;
	h["kiwi"].push_back(100);
	h["kiwi"].push_back(200);
	h["orange"].push_back(567);
	h["kiwi"].push_back(789);
	for(auto node:h){
		for (int i = 0; i < node.second.size(); i++)
		{
			/* code */
			cout<<node.second[i]<<" ";
		}
		
	}
	return 0;
}