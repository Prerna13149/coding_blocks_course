#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

bool checkBracket(char ch[]){
	int n = strlen(ch);
	int i=0;
	char temp;
	stack<char>s;
	while(ch[i]!='\0'){
		if(ch[i]!=')' && ch[i]!='}' && ch[i]!=']'){
			s.push(ch[i]);
		}
		if(ch[i]==')' && !s.empty()){
			char a = s.top();
			//cout<<a<<"\n";
			int ct = 0;
			if(a=='('){
				return false;
				s.pop();
			}
			else if(a=='[' || a=='{'||a==']' || a=='}'){
				return false;
			}
			else{
				//cout<<"I am here"<<"\n";
				while(s.top()!='('){
					s.pop();
					ct++;
				}
				s.pop();
			}
			//cout<<"i: "<<i<<"count: "<<ct<<"\n";
			if(ct==0){
				return false;
			}
			
		}
		// if(ch[i]==']' && !s.empty()){
		// 	char a = s.top();
		// 	//cout<<a<<"\n";
		// 	int ct = 0;
		// 	if(a=='['){
		// 		return false;
		// 		s.pop();
		// 	}
		// 	else if(a=='(' || a=='{'||a==')' || a=='}' ){
		// 		return false;
		// 	}
		// 	else{
		// 		while(s.top()!='['){
		// 			s.pop();
		// 			ct++;
		// 		}

		// 	}
		// 	if(ct==0){
		// 		return false;
		// 	}
		// }
		// if(ch[i]=='}' && !s.empty()){
		// 	char a = s.top();
		// 	//cout<<a<<"\n";
		// 	int ct = 0;
		// 	if(a=='{'){
		// 		return false;
		// 		s.pop();
		// 	}
		// 	else if(a=='(' || a=='['||a==')' || a==']'){
		// 		return false;
		// 	}
		// 	else{
		// 		while(s.top()!='{'){
		// 			s.pop();
		// 			ct++;
		// 		}

		// 	}
		// 	if(ct==0){
		// 		return false;
		// 	}
		// }

		i++;
	}
	if(s.empty()){
			return true;
		}
	return true;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cin.get();
	int i=0;
	
	while(i<n){
		char ch[100];
		cin.getline(ch, 100);
		if(checkBracket(ch)){
			cout<<"Not Duplicates"<<"\n";
		}
		else{
			cout<<"Duplicate"<<"\n";
		}
		i++;
	}
	
	
	return 0;
}
