#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

bool checkBracket(char ch[]){
	int n = strlen(ch);
	int i=0;
	char temp;
	stack<char>s;
	char ch_new[100];
	int j=0;
	while(i<n){
		if(ch[i]=='('||ch[i]=='{'||ch[i]=='['||ch[i]==')'||ch[i]=='}'||ch[i]==']'){
			ch_new[j] = ch[i];
			j++;
		}
		i++;
	}
	ch_new[j] = '\0';
	i=0;
	cout<<ch_new<<"\n";
	while(ch[i]!='\0'){
		if(ch_new[i]=='('||ch_new[i]=='{'||ch_new[i]=='['){
			s.push(ch_new[i]);
		}
		if(ch_new[i]==')' && !s.empty()){
			char a = s.top();
			//cout<<a<<"\n";
			if(a=='('){
				s.pop();
			}
			else{
				return false;
			}
		}
		if(ch_new[i]==']' && !s.empty()){
			char a = s.top();
			//cout<<a<<"\n";
			if(a=='['){
				s.pop();
			}
			else{
				return false;
			}
		}
		if(ch_new[i]=='}' && !s.empty()){
			char a = s.top();
			//cout<<a<<"\n";
			if(a=='{'){
				s.pop();
			}
			else{
				return false;
			}
		}

		i++;
	}
	if(s.empty()){
			return true;
		}
}
int main(int argc, char const *argv[])
{
	char ch[100];
	cin.getline(ch, 100);
	if(checkBracket(ch)){
		cout<<"Balanced"<<"\n";
	}
	else{
		cout<<"Not balanced"<<"\n";
	}
	return 0;
}
