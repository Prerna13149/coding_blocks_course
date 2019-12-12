#include<iostream>
#include<cstring>
using namespace std;
class node{
	public:
		int val;
		string key;
		node* next;
	node(string key, int val){
		next = NULL;
		this->val = val;
		this->key = key;
	}
};
class hashmap{
	void rehash(){
		int old_size = max_size;
		node** old_bucket = array_list;
		max_size = 2* max_size;
		for (int i = 0; i < old_size; ++i)
		{
			node* temp = old_bucket[i];
			while(temp){
				insert(temp->key, temp->val);
				temp = temp->next;
			}
			if(old_bucket[i]){
				delete old_bucket[i];
			}
			/* code */
		}
		delete []old_bucket;
	}

public:
	int max_size;
	int curr_size;
	node** array_list;
	hashmap(int max_size){
		curr_size = 0;
		this->max_size = max_size;
		array_list = new node*[max_size];
		for (int i = 0; i < max_size; i++)
		{
			array_list[i] =  NULL;
			/* code */
		}
	}
	int hashfn(string key){
		int i=0;
		int ans=0;
		int mult=37;
		while(key[i]!='\0'){
			ans = ans + mult*key[i];
			ans = ans%max_size;
			mult = 37*mult;
			mult = mult%37;//to ensure that value does not become too large
			i++;
		}
		return ans;
	}


	void insert(string key, int val){
		int index = hashfn(key);
		node* temp = array_list[index];
		int flag = 0;
		while(temp){
			if(temp->key == key){
				flag = 1;
				break;
			}
			temp = temp->next;
		}
		if(flag!=1){
			node* n = new node(key, val);
			n->next = array_list[index];
			array_list[index] = n;
			curr_size++;
		}
		
		float load_factor = (1.0*curr_size)/max_size;
		if(load_factor>0.7){
			rehash();//never called from main
		}
	}
	node* search(string key){
		int index = hashfn(key);
		node* n = array_list[index];
		if(n!=NULL){
			while(n){
				if(n->key == key){
					return n;
				}
				n=n->next;
			}
		}
		
		return NULL;
	}
	void print_list(){
		for (int i = 0; i < max_size; i++)
		{
			if(array_list[i]){
				node* n = array_list[i];
				cout<<"val of i: "<<i<<"\n";
				while(n){
					cout<<n->key<<" ";
					cout<<n->val<<"\n";
					n = n->next;
				}
			}
			/* code */
		}
		return;
	}
	int& operator[](string key){
		node* n = search(key);
		if(n){

			return n->val;
		}
		else{
			int garbage;
			insert(key, garbage);
			n = search(key);
			return n->val;
		}

	}
	void delete_key(string key){
		node *n = search(key);
		if(n==NULL){
			return;
		}
		else{
			int index = hashfn(key);
			node *n = array_list[index];
			node *prev = n;
			while(n){
				if(n->key == key){
					break;
				}
				prev = n;
				n = n->next;
			}
			node* temp = n->next;
			prev->next = temp;
			delete temp;
		}
	}

};

int main(int argc, char const *argv[])
{
	hashmap h(5);
	h.insert("apple", 100);
	h.insert("orange", 200);
	h.insert("abc", 300);
	h.insert("abc", 350);

	h.print_list();
	node* n = h.search("abc");
	cout<<n->val<<" "<<n->key<<"\n";
	h["abc"] = 500;
	cout<<"Printing before deleteion"<<"\n";
	h.print_list();
	h.delete_key("orange");
	cout<<"Printing after deleteion"<<"\n";
	h.print_list();
	return 0;
}