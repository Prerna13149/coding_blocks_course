#include<iostream>
using namespace std;
bool checkPalindrome(char ch[]){
	int i = 0;
	while(ch[i] != '\0'){
		i++;
	}
	int j = i-1;
	i=0;
	while(i <= j){
		if(ch[i] == ch[j]){
			i++;
			j--;
		}
		else{
			return false;
		}
	}
	return true;
}
int main(int argc, char const *argv[])
{
	char ch[100];
	cin.getline(ch, 100);
	if(checkPalindrome(ch)){
		cout<<"Yes palindrome"<<"\n";
	}
	else{
		cout<<"Not a palindrome"<<"\n";
	}
	return 0;
}