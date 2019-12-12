#include<iostream>
#include<cstring>
using namespace std;

bool checkBalance(char ch[1000], int i, int k, int &count){
	if(ch[i]=='\0' && ch[k]=='\0'){
		if(count>0){
			return true;
		}
		else{
			return false;
		}
		
	}
	bool ans;
	if(ch[i]==')'){
		//cout<<"here"<<"\n";
		k = i;
		if(ch[i-1]=='('){
			count++;
			i++;
			k--;
			return checkBalance(ch, i, k, count);
		}

	}
	if(ch[i]==']' && i>0){
		k = i;
		if(ch[i-1]=='['){
			i++;
			k--;
			count++;
			return checkBalance(ch, i, k, count);
		}

	}
	if(ch[i]=='}' && i>0){
		k = i;
		if(ch[i-1]=='{'){
			i++;
			k--;
			count++;
			return checkBalance(ch, i, k, count);
		}

	}
	return checkBalance(ch, i+1, k+1, count);
}
int main(int argc, char const *argv[])
{
	char ch[1000];
	cin.getline(ch, 1000);
	//cout<<ch<<"\n";
	int n = strlen(ch);
	char ch_new[1000];
	int k=0;
	for (int i = 0; i < n; i++)
	{
		if(ch[i]=='['||ch[i]=='{'||ch[i]=='('||ch[i]==')'||ch[i]=='}'||ch[i]==']'){
			ch_new[k] = ch[i];
			k++;
		}
		/* code */
	}
	ch_new[k]='\0';
	//cout<<ch_new<<"\n";
	int count=0;
	bool ans = checkBalance(ch_new, 0, 0, count);
	if(ans){
		cout<<"true"<<"\n";
	}
	else{
		cout<<"false"<<"\n";
	}
	return 0;
}