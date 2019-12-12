#include<iostream>
#include<cstring>
#include<unordered_map>

using namespace std;
class node{
public:
	char ch;
	bool isterminal;
	unordered_map<char, node*> mp;

	node(char c){
		ch = c;
		isterminal = false;
	}
};
class trie{
	node* root;
public:
	trie(){
		root = new node('\0');
	}
	void addWord(char* word){
		node* temp=root;
		for(int i=0;word[i]!='\0';i++){
			char c = word[i];
			if(temp->mp.count(c)==0){//searches for key, if count
				node* n = new node(c);
				temp->mp[c] = n;
				temp = temp->mp[c];
			}
			else{
				temp = temp->mp[c];
			}
		}
		temp->isterminal = true;
	}

	bool searchWord(char * word){
		node* temp = root;
		for(int i=0;word[i]!='\0';i++){
			char c = word[i];
			if(temp->mp.count(c)==0){//searches for key, if count
				return false;
			}
			else{
				temp = temp->mp[c];
			}
		}
		if(temp->isterminal==true){
			return true;
		}
		return false;
	}

};
int main(int argc, char const *argv[])
{
	string ch[1000]={"apple", "hello", "hey", "heythere", "rabbit"};
	trie t;
	t.addWord("apple");
	t.addWord("hello");
	t.addWord("hey");
	if(t.searchWord("rabbit")){
		cout<<"Found it"<<"\n";
	}
	else{
		cout<<"not Found it"<<"\n";
	}
	return 0;
}