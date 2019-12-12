#include<iostream>
using namespace std;

int main(){
	/*
	Write a program to count number of words,  characters and lines in the given input.Inputis  terminated by a‘$’
	*/

	char ch = 'a';
	int word_ct = 0;
	int char_ct = 0;
	int line_ct = 0;
	while(ch!='$'){
		ch = cin.get();
		if(ch=='.' || ch=='\n'){
			line_ct++;
			word_ct++;
		}
		else if(ch==' '){
			word_ct++;
		}
		else{
		}
		char_ct++;
	}
	cout<<"Word count: "<<word_ct+1<<endl;
	cout<<"Character count: "<<char_ct-1<<endl;
	cout<<"lines count: "<<line_ct+1<<endl;
	return 0;
	
}